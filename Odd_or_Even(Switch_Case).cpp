#include <iostream>
using namespace std;
int main (){

    int num;
    cout << "Enter a number: ";
    cin >> num;

    switch (num % 2){
        case 0:
            cout << "Number, " << num << ", is Even" << endl;
            break;
        case 1:
            cout << "Number, " << num << ", is Odd" << endl;
            break;
    }
    
    return 0;
}