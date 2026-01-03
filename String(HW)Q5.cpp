/* 5. Read a string and extract a substring from a given starting
position and length. Display the substring. */

#include <iostream>
#include <string>
using namespace std;

int main (){
	
	string givenWord;
	int start, length;
	
	cout << "Enter a word: ";
	getline(cin, givenWord);
	
	cout << "Enter starting position: ";
    cin >> start;

    cout << "Enter length: ";
    cin >> length;
	
	cout << "Substring: " << givenWord.substr(start,length);
	return 0;
}