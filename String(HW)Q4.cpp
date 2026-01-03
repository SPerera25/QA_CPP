/* 4. Read two strings and compare them using compare(). Display 
whether the strings are equal or not. */

#include <iostream>
#include <string>
using namespace std;

int main (){
	
	string str1, str2;
	
	cout << "Enter the first string: ";
	cin >> str1;
	cout << "Enter the second string: ";
	cin >> str2;
	
	if (str1.compare(str2) == 0 ){
		cout << "The first string is equal to the second string.";
	}
	else {
		cout << "The first string is not equal to the second string.";
	}
	return 0;
}