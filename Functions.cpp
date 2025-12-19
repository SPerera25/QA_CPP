/* Write a program using three functions: a function to get a number from the user,
a function to find the cube of that number, and a function to display the result.
Call all functions from main(). */

#include <iostream>
using namespace std;

double getNumber () {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}
double cube (double n) {
    return n * n * n;
}
void displayResult (double result) {
    cout << "The cube of the number is: " << result << endl;
}
int main () {
    double number = getNumber();
    double result = cube(number);
    displayResult(result);
    return 0;
}
