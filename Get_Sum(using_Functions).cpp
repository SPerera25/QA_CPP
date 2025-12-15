#include <iostream>
using namespace std;

double add(double a, double b) {
    return (a+b);
}
int main () {

    double num1, num2;

    cin >> num1 >> num2;
    cout << "The sum of "  << num1 << " and " << num2 << " is " << add(num1,num2) <<endl;
    return 0;
}