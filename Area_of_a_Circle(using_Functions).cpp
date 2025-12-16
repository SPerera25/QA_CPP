/* Write a function named areaOfCircle(double r) that returns the area of a circle using the
formula Area = πr² (use π = 3.14159). Read the radius in main() and display the result. */

#include <iostream>
using namespace std;

const double PI = 3.14159;

double areaOfCircle ( double r ) {
    double Area = PI * r * r;
    return ( Area );
}

int main () {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "The area of the circle is: "<< areaOfCircle(radius);
    
    return 0;
}