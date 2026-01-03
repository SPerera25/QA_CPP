/* 8. Read a string and replace a portion of the string with another string 
using replace(). Display the updated string. */

#include <iostream>
#include <string>
using namespace std;

int main (){
	
	string str, newStr;
	int position,len;
	
	cout << "Enter a string: ";
	getline(cin, str);
	
	cout << "Enter position to replace: ";
	cin >> position;
	cout << "Enter the number of characters to replace: ";
	cin >> len;
	cout << "Enter the replacement string: ";
	cin >> newStr;
	cout << endl;
	
	cout << "New string: " << str.replace(position,len,newStr);
	return 0;
}
