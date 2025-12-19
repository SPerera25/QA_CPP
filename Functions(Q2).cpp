/* Write a program using functions to perform addition, subtraction,
multiplication, and division on two numbers. Implement each operation 
as a separate function. */

#include <iostream>
using namespace std;

double add (double x, double y) {
    return x + y;
}

double substract (double x, double y){
    return x - y;
}

double multiply (double x, double y){
    return x * y;
}

double divide (double x, double y){
    return x / y;
}

int main (){
    double num1, num2;

    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    cout << "Addition: " << add (num1, num2) << endl;
    cout << "Subtraction: " << substract (num1, num2) << endl;
    cout << "Multiplication: " << multiply (num1, num2) << endl;
    cout << "Division: " << divide (num1, num2) << endl;

    return 0;
}