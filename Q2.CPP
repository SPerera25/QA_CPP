#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter an integer: ";
    cin >> num;

    int *ptr = &num;
    *ptr = *ptr + 10;
	
    cout << "Updated value: " << num << endl;

    return 0;
}