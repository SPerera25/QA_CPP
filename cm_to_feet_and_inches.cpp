#include <iostream>
using namespace std;
int main(){
	double height,totalInches;
	int feet,inches;
	
	cout << "Enter your height in cm: ";
	cin >> height;
	
	totalInches = height/2.54;
	feet = totalInches/12;
	inches = totalInches - (feet*12);
	
	cout << "Height: " << feet << " feet " << inches << " inches " << endl;
	
	return 0;
}