#include <iostream>
using namespace std;

int main() {
    double prevReading, currentReading, unit, charge = 0;

    cout << "Enter previous meter reading: ";
    cin >> prevReading;
    cout << "Enter current meter unit: ";
    cin >> currentReading;

    unit = currentReading - prevReading;
    cout << "Total units consumed = " << unit << endl;

    if (unit <= 30) {
        charge = unit * 25;
    } else if (unit <= 60) {
        charge = (30 * 25) + (unit - 30) * 35;
    } else if (unit <= 90) {
        charge = (30 * 25) + (30 * 35) + (unit - 60) * 45;
    } else if (unit <= 120) {
        charge = (30 * 25) + (30 * 35) + (30 * 45) + (unit - 90) * 55;
    } else {
        charge = (30 * 25) + (30 * 35) + (30 * 45) + (30 * 55) + (unit - 120) * 65;
    }

    cout << "Charge for the month: Rs. " << charge << "/=" << endl;

    return 0;
}