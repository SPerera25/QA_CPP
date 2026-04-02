#include <iostream>
using namespace std;

int main() {
    int x = 100;

    int *p = &x;
    int **pp = &p;

    cout << "Single dereference: " << *p << endl;
    cout << "Double dereference: " << **pp << endl;

    return 0;
}