#include <iostream>
#include <string>
using namespace std;

int main () {
	string greeting = "Hello";
	for (int i= (greeting.length()-1); i <= greeting.length(); i--){
		cout<<greeting[i]<<endl;
	}
	return 0;
}