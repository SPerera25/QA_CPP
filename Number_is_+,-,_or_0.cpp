/* Check if a number is positive, negative, or zero */
#include <iostream>
using namespace std;

int main (){

    double num;

    cout << "Enter a number: ";
    cin >> num;

    if (num == 0){
        cout << "The number is zero. " << endl;
    }
    else if (num > 0){
        cout << "The number " << num << " is positive. " << endl;
    }
    else {
        cout << "The number " << num << " is negative. " << endl;
    }
    return 0;
}