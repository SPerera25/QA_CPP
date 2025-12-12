/*Get the user input for hou many seconds and print
how many minutes and hours are in that many seconds*/
#include <iostream>
using namespace std;
int main() {
    int seconds, minutes, hours;
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    minutes = seconds / 60;
    hours = minutes / 60;

    cout << seconds << " seconds is equal to " << minutes << " minutes or " << hours << " hours." << endl;

    return 0;
} 