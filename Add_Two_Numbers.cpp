//Get two numbers from the user and add them together.

#include <iostream>
using namespace std;
int main() {

    double num1, num2, sum;

    cout << "Enter your first number: ";
    cin >> num1;
    cout << "Enter tour second number: ";
    cin >> num2;

    sum = num1 + num2;

    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
    return 0;
}
