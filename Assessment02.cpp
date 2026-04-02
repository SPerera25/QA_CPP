#include <iostream>
using namespace std;
int main (){
	
	int unit;
	double bill;
	
	cout << "Enter the unit value: ";
	cin >> unit;
	
	switch(unit){
		case 0 ... 50 :  // case ranges
			bill = unit*0.50;
			cout << "For the first 50 units Rs." << bill << endl;
			break;
		case 51 ... 150 :
			bill = unit*0.75;
			cout << "For the next 100 units Rs." << bill << endl;
			break;
		case 151 ... 250 :
			bill = unit*1.20;
			cout << "For the next 100 units Rs." << bill << endl;
			break;
		default:
			bill = unit*1.50;
			cout << "For unit above 250 Rs." << bill << endl;
			break;
	}	
	bill += (bill*0.20);
	cout << "Final bill: Rs." << endl;
	
	return 0;
}