/* 10. Read a string and perform the following operations:
	- Add a character at the end using push_back()
	- Remove the last character using pop_back()
Display the string after each operation.                 */

#include <iostream>
#include <string>
using namespace std;

int main (){
	string str;
	char ch;
	
	cout << "Enter a string: ";
	getline(cin,str);
	cout << "The entered string \"" << str << "\"" << endl;
	
	cout << "Enter a character that you want to add at the end of the string: ";
	cin >> ch;
	
	//push_back() does not a return a string. It returns a void.
	str.push_back(ch);
	cout << "The string with the added character: " << str << endl;
	
	//pop_back() does not a return a string. It returns a void.
	str.pop_back();
	cout << "The string without the last character: " << str << endl;
	
	return 0;
}