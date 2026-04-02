#include <iostream>
using namespace std;

int main() {
	
    int x = 50;

	int *ptr = &x;
	
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;

    cout << "Pointer value (address stored): " << ptr << endl;
    cout << "Dereferenced value: " << *ptr << endl;

    return 0;
}