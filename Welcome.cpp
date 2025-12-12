// Ask the user for name and welcome them
#include <iostream>
#include <string>
using namespace std;
int main () {

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Welcome, " << name << "!" << endl;
    return 0;
}