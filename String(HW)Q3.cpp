/* 3. Read two strings from the user and append the second string 
to the first string. Display the final string. */

#include <iostream>
#include <string>
using namespace std;

int main (){
	string firstName;
	string lastName;
	
	cout << "Enter the first name: ";
	cin >> firstName;
	cout << "Enter the last name: ";
	cin >> lastName;
	
	cout << "Output: " << firstName.append(lastName);
	return 0;
}