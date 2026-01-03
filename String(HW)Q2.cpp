/* 2. Read a string and display:
	- The first character
	- The last character
(use appropriate string functions) */

#include <iostream>
#include <string>
using namespace std;

int main (){
	
	string givenStr;
	cout << "Enter a word: ";
	getline(cin,givenStr);
	cout << "The first character is: " << givenStr[0] <<endl;
	cout << "The last character is: " << givenStr[givenStr.length()-1] <<endl;
	return 0;
	
}