#include <iostream>
using namespace std;
int main (){
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    int max = (a > b) ? a : b; //This is a ternary operator
    // It works like an if-else statement
    cout << "The largest number is: " << max << endl;
    return 0;
}