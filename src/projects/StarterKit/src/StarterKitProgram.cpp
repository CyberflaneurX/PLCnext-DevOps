#include "StarterKitProgram.hpp"
#include "Arp/System/Commons/Logging.h"
#include "Arp/System/Core/ByteConverter.hpp"

namespace StarterKit
{
uint32_t
StarterKitProgram::convertMillivoltsToRange(uint32_t millivolts, uint32_t minRange,
                                            uint32_t maxRange)
{
    // Convert millivolts to volts as a floating-point number
    double voltage = static_cast<double>(millivolts) / 1000.0;

    // Assuming voltage is now in the range 0-10V
    // Scale the voltage to the new range
    double scaled = ((voltage / 10.0) * (maxRange - minRange)) + minRange;

    // Cast the result to uint32 for return
    return scaled;
};

void
StarterKitProgram::Execute()
{
    // implement program

    if (config_.allowOutputs && command_.setOutput)
    {
        // control two fans for cooling
        dOUT01_ = true;
        dOUT02_ = true;
    }
    else
    {
        dOUT01_ = false;
        dOUT02_ = false;
    }

    if (command_.readAnalog1)
    {
        uint32_t analogReading = aiN1_;

        log.Info("Analog one reading: {0}", analogReading);

        const double scaledReading = convertMillivoltsToRange(
            analogReading, config_.analogInOne.minRange, config_.analogInOne.maxRange);

        log.Info("Scaled analog reading {0}", scaledReading);
    }
};

} // end of namespace StarterKit
