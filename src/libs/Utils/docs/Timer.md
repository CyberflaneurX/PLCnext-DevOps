Timer Class Documentation
Overview
The Timer class provides a flexible way to implement timer-based functionalities similar to TON (Timer On Delay) and TOF (Timer Off Delay) used in ladder logic. This class allows you to configure and use the timer for different purposes based on the selected mode.

Features
TON (Timer On Delay): Delays the output turning on after the input condition becomes true.
TOF (Timer Off Delay): Delays the output turning off after the input condition becomes false.
Get Elapsed Time: Allows you to retrieve the current elapsed time since the timer started.
Restart Timer: Resets the timer, clearing the internal state.
Usage
1. Include the Timer Header
Ensure that you include the Timer class header in your source file:

cpp
Copy code
#include "PlatingTimer.hpp"
2. Create a Timer Instance
To create a timer, you need to specify the mode (TON or TOF) and the timeout duration.

cpp
Copy code
// Create a TON timer with a 1-second delay
Plating::Timer tonTimer(Plating::TimerMode::TON, std::chrono::milliseconds(1000));

// Create a TOF timer with a 1-second delay
Plating::Timer tofTimer(Plating::TimerMode::TOF, std::chrono::milliseconds(1000));
3. Update the Timer
Call the update() method in your loop or control logic to process the input signal and get the timer's output.

cpp
Copy code
bool input = /* your input condition */;

bool tonOutput = tonTimer.update(input);  // Update and get output for TON
bool tofOutput = tofTimer.update(input);  // Update and get output for TOF
For TON mode: The output will be true only after the input has been true for the specified timeout duration.
For TOF mode: The output will stay true as long as the input remains true and will turn false after the timeout duration once the input becomes false.
4. Get Elapsed Time
You can retrieve the current elapsed time since the timer started in milliseconds using the getCurrentTime() method.

cpp
Copy code
double tonTime = tonTimer.getCurrentTime();  // Get elapsed time for TON
double tofTime = tofTimer.getCurrentTime();  // Get elapsed time for TOF
5. Restart the Timer
If needed, you can reset the timer and clear its internal state using the restart() method.

cpp
Copy code
tonTimer.restart();  // Restart the TON timer
tofTimer.restart();  // Restart the TOF timer
Example
Here’s a complete example demonstrating how to use the Timer class:

cpp
Copy code
#include "PlatingTimer.hpp"

int main()
{
    // Create timers
    Plating::Timer tonTimer(Plating::TimerMode::TON, std::chrono::milliseconds(1000));
    Plating::Timer tofTimer(Plating::TimerMode::TOF, std::chrono::milliseconds(1000));

    bool input = /* your input condition */;

    // Update timers
    bool tonOutput = tonTimer.update(input);
    bool tofOutput = tofTimer.update(input);

    // Get elapsed time
    double tonTime = tonTimer.getCurrentTime();
    double tofTime = tofTimer.getCurrentTime();

    // Optionally restart timers
    tonTimer.restart();
    tofTimer.restart();

    return 0;
}
Conclusion
The Timer class is a versatile tool for implementing timer-based logic in your application. With support for both TON and TOF modes, it offers a flexible solution for timing tasks. By following this guide, you can quickly integrate the Timer class into your project and start utilizing its features.