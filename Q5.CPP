#include <iostream>
using namespace std;

int main() {
	
    int arr[4] = {5, 10, 15, 20};
    int *p = arr;

    for(int i = 0; i < 4; i++) {
        cout << *(p + i) << endl;
    }

    return 0;
}