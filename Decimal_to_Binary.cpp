#include <iostream>
using namespace std;

void decitobin(int n){
	int bin[100];
	int x = 0;
	while(n>0){
		bin[x] = n%2;
		n = n/2;
		x++;
	}
	for(int j=x-1; j>=0; j--){
		cout << bin[j];
	}
}

int main(){

	int num;

	cout << "Enter a number in Base 10 (Limit the maximum digit to three): ";
	cin >> num;

	cout << "Binary: "; 
	decitobin(num);	
    
	return 0;
}