/* 6. Read a string and a character and check whether the character 
exists in the string using find(). Display the result. */

#include <iostream>
#include <string>
using namespace std;

int main (){
	
	string givenWord;
	char ch;
	
	cout << "Enter a word: ";
	getline(cin,givenWord);
	cout << "Enter a character exists in the entered word: ";
	cin >> ch;
	cout << "Position character exists: " << givenWord.find(ch);
	return 0;
	
}
