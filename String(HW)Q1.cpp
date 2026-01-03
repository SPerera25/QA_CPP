/* 1. Read a string from the user and display:
	- The string
	- Its length using length() or size() */

#include <iostream>
#include <string>
using namespace std;

int main (){
	
	string givenStr;
	cout << "Enter a word: ";
	cin >> givenStr;
	cout << "The given word is " << givenStr << endl;
	cout << "The length of the word is " << givenStr.length();
	return 0;
	
}