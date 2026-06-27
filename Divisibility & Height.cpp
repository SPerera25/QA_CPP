#include<iostream>
using namespace std;
int main(){
	
	int num,feet;
	float height,total_inches;
	cout<<"Enter a number: ";
	cin >> num;
	
	if (num%5==0 && num%7==0){
		cout << num << " is divisible by both 5 and 7.";
	}else {
		cout << num << " is not divisible by both 5 and 7.";
	}
	
	cout << "Enter height in centimeters: ";
	cin >> height;
	
	total_inches = height/ 2.54;
	feet = total_inches / 12;
	total_inches = total_inches - (feet*12);
	
	cout << "Height: " << feet << ""
	
	return 0;
}
