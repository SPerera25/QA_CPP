#include <iostream>
using namespace std;
int main (){

    double num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3){
        cout << "The largest number is: " << num1 << endl;
    }
    else if (num2 >= num1 && num2 >= num3){
        cout << "The largest number is: " << num2 << endl;
    }
    else {
        cout << "The largest number is: " << num3 << endl;
    }
    return 0;
}
/*  Another way to find the largest number using the ternary operator:

#include <iostream>
using namespace std;
int main (){

    double num1, num2, num3, largest;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    largest = (num1 >= num2) ? ((num1 >= num3) ? num1 : num3) : ((num2 >= num3) ? num2 : num3);

    cout << "The largest number is: " << largest << endl;

    return 0;
}


#inculde <iostream>
#include <algorithm>
using namespace std;
int main (){

    double num1, num2, num3, largest;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    largest = max(num1, max(num2, num3));

    cout << "The largest number is: " << largest << endl;

    return 0;
}


#include <iostream>
using namespace std;
int main (){
    double num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2){
        if (num1 >= num3){
            cout << "The largest number is: " << num1 << endl;
        } else {
            cout << "The largest number is: " << num3 << endl;
        }
    } else {
        if (num2 >= num3){
            cout << "The largest number is: " << num2 << endl;
        } else {
            cout << "The largest number is: " << num3 << endl;
        }
    }
    return 0;
}
*/