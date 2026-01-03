/* 7. Read a string and remove a specified number of characters from a given position
using erase(). Display the modified string.  */

#include <iostream>
#include <string>
using namespace std;

int main (){
	string givenWord;
	int position, num;
	
	cout << "Enter a word: ";
	getline(cin,givenWord);
	
	cout << "Enter position: ";
    cin >> position;

    cout << "Enter number of characters to remove: ";
    cin >> num;
	
	cout << "Modified string: " << givenWord.erase(position,num);
	return 0;
}