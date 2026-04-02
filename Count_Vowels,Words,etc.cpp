#include <iostream>
#include <string>
using namespace std;

int countVowels(string str){
	int count = 0;
	for(int i=0; str[i]!='\0'; i++){
		if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'
		||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
			count++;
		}
	}
	return count;
}

int countWords(string str){
	int count = 0;
	bool inWord = false;
	for(int i=0; str[i]!='\0'; i++){
		if(str[i]!=' '&& inWord==false){
			count++;
			inWord = true;
		}
		else if(str[i]==' '){
			inWord = false;
		}
	}
	return count;
}

bool isPalindrome(string str){
	int count = 0;
	for (int i=0; str[i]!='\0'; i++){
		count++;
	}
	for(int j=0; j<=count-1;j++){
		if(str[count-1-j]!=str[j]){
			return false;
		}
	}
	return true;
}

int main (){
	string text;
	cout << "Enter a sentence: "; 
	getline(cin, text);
	
	cout << "Number of vowels: " << countVowels(text) << endl; 
	cout << "Number of words: " << countWords(text) << endl; 
	
	if (isPalindrome(text)){
		cout << "It is a palindrome." << endl; 
	}
	else{
		cout << "It is not a palindrome." << endl;
	}
	
	return 0;
}