#include <iostream>
#include <iomanip> // to use toupper function
using namespace std;

// Function to return value of Roman character
int value(char r) {
    if (r == 'I') return 1;
    if (r == 'V') return 5;
    if (r == 'X') return 10;
    if (r == 'L') return 50;
    if (r == 'C') return 100;
    if (r == 'D') return 500;
    if (r == 'M') return 1000;
    return -1; // invalid character
}

// Function to convert Roman to Decimal
int romanToDecimal(string roman) {
    int decimal = value(roman[0]);

    for (int i = 1; i < roman.length(); i++) {
        int curr = value(roman[i]);
        int prev = value(roman[i - 1]);

        decimal += curr;

        if (curr > prev) {
            decimal -= 2 * prev;
        }
    }

    return decimal;
}

int main() {
    string roman;
    cout << "Enter Roman number: ";
    cin >> roman;

    // Convert lowercase to uppercase
    for (int i = 0; i < roman.length(); i++) {
        roman[i] = toupper(roman[i]);
    }

    // Validate input (only Roman letters)
    for (int i = 0; i < roman.length(); i++) {
        if (value(roman[i]) == -1) {
            cout << "Invalid Roman number!" << endl;
            return 0;
        }
    }

    cout << "Decimal: " << romanToDecimal(roman);

    return 0;
}