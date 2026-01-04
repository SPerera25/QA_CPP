/* Check if a number is within a specific range using relational operators */
#include <iostream>
using namespace std;

int main() {

    int number, lowerBound, upperBound;

    cout << "Enter the number to check: ";
    cin >> number;

    cout << "Enter the lower bound: ";
    cin >> lowerBound;

    cout << "Enter the upper bound: ";
    cin >> upperBound;

    if (number >= lowerBound && number <= upperBound) {
        cout << number << " is within the range [" << lowerBound << ", " << upperBound << "]" << endl;
    } else {
        cout << number << " is not within the range [" << lowerBound << ", " << upperBound << "]" << endl;
    }

    return 0;
}
