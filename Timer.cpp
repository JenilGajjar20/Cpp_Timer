#include <iostream>
#include <iomanip>
#include <unistd.h>
using namespace std;

int hours = 0;
int minutes = 0;
int seconds = 0;
// Function to display the timer
void displayClock()
{
    // System call to clear the screen
    system("cls");

    cout << setfill(' ') << setw(42) << "    Timer    \n";
    cout << setfill(' ') << setw(49) << "----------------------------\n";
    cout << setfill(' ') << setw(21);
    cout << " | " << setfill('0') << setw(2) << hours << " hrs : " << setfill('0') << setw(2) << minutes << " mins : " << setfill('0') << setw(2) << seconds << " secs |\n";
    cout << setfill(' ') << setw(49) << "----------------------------\n";
}

void timer()
{
    while (true)
    {
        // Display the timer
        displayClock();

        // Sleep system call to sleep for 1 second
        sleep(1);

        // Increment seconds
        seconds++;

        if (seconds == 60)
        {
            seconds = 0;
            // Increment minutes
            minutes++;
            if (minutes == 60)
            {
                minutes = 0;
                // Increment Hours
                hours++;
            }
            seconds = 0;
        }
    }
}

int main()
{
    timer();
    return 0;
}