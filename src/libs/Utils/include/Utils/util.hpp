#pragma once
#include "Arp/System/Commons/Chrono/SystemTick.hpp"
#include <cmath>

namespace Utils
{

using namespace Arp::System::Commons::Chrono;

enum class TimerMode
{
    TON, // Timer On Delay
    TOF  // Timer Off Delay
};

class Timer
{
  public:
    Timer(TimerMode mode, std::chrono::milliseconds timeout)
        : mode_(mode), tTimeoutMicros_(timeout.count() * 1000), isTiming_(false), output_(false),
          tStartMicros_(0)
    {
    }

    // Update function to process the input and return the timer's output
    bool update(bool input)
    {
        const int64_t now = SystemTick::GetMicroTick().count();

        if (mode_ == TimerMode::TON)
        {
            return updateTON(input, now);
        }
        else // TimerMode::TOF
        {
            return updateTOF(input, now);
        }
    }

    // Method to get the current elapsed time in milliseconds
    double getElapsedTime() const
    {
        const int64_t now = SystemTick::GetMicroTick().count();
        return static_cast<double>(now - tStartMicros_) / 1000.0;
    }

    // Method to restart the timer
    void restart()
    {
        tStartMicros_ = SystemTick::GetMicroTick().count();
        isTiming_     = false;
        output_       = false;
    }

  private:
    TimerMode mode_;
    int64_t tTimeoutMicros_;
    bool isTiming_;
    bool output_;
    int64_t tStartMicros_;

    bool updateTON(bool input, int64_t now)
    {
        if (input)
        {
            if (!isTiming_)
            {
                tStartMicros_ = now;
                isTiming_     = true;
            }
            if (now - tStartMicros_ >= tTimeoutMicros_)
            {
                return true;
            }
        }
        else
        {
            isTiming_ = false;
        }
        return false;
    }

    bool updateTOF(bool input, int64_t now)
    {
        if (!input)
        {
            if (!isTiming_)
            {
                tStartMicros_ = now;
                isTiming_     = true;
                output_       = true;
            }
            if (now - tStartMicros_ >= tTimeoutMicros_)
            {
                output_ = false;
            }
        }
        else
        {
            isTiming_ = false;
            output_   = true;
        }
        return output_;
    }
};

} // namespace Utils
