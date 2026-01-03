/* 9. Read a string and check whether it is empty using empty(). Display
an appropriate message. */

#include <iostream>
#include <string>
using namespace std;

int main (){
	string str;
	
	cout << "Enter a string: ";
	getline(cin, str);
	
	if (str.empty()){
		cout << "The entered string is empty.";
	}
	else {
		cout << "The entered string is not empty.";	
	}
	return 0;
}