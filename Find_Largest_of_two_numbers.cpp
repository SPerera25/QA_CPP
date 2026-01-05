#include <iostream>
using namespace std;
int main (){

    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if ( num1 >= num2 ){
        cout << num1 << " is the largest number.";
    } else {
        cout << num2 << " is the largest number.";
    }

    return 0;
}