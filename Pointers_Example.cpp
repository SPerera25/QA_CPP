#include <iostream>
using namespace std;
int main(){
	int arr[5] = {10,20,30,40,50};
	int x = 10;
	int a =5, b=10;
	
	int *ptr = &x;
	*ptr = 30;
	cout << x << endl; 
	
	int *p = arr;
	cout << *p << endl;
	cout << *(p+1) << endl;
	cout << *(p+2) << endl;
	cout << *(p+3) << endl;
	cout << *(p+4) << endl;

	int *ptra = &a;
	int *ptrb = &b;
	int temp = *ptra;
	*ptra = *ptrb;
	*ptrb = temp;
	
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
		
	return 0;
}