/* Write a recursive function to calculate power.

Example
power(2,3) = 8  */

#include <iostream>
using namespace std;

int power(int base,int exp){
	if(exp==0)
		return 1;
	return base*power(base,exp-1);
}

int main(){
	int base,exp;
	cout << "Enter the base: ";
	cin >> base;
	cout << "Enter the exponent: ";
	cin >> exp;
	cout << "Power: " << power(base,exp);
	return 0;
}
