#include <iostream>
using namespace std;
int main (){
    int age;
	cout << "Enter your age in years: ";
	cin >> age;
	if ( age <= 0 || age >= 120 ){
		cout << "Invalid age.";
	}
	else if ( age >= 18 ){
		cout << "You are eligible to drive.";
	}
	else if ( age < 18 ){
		cout << "You are not eligible to drive." << endl;
		cout << "You have to wait " << 18 - age << " Years to drive." << endl;
	}
	return 0;
}