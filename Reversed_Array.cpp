#include <iostream>
using namespace std;

void reversedArray (int arr[], int size){
	cout << "Reversed Array = " ;
	for (int i = size-1; i>=0; i--){
		cout << arr[i] << " ";
	}
}
int main (){
	int elements[5] = {10,20,30,40,50};
	cout << "Original Array = " ;
	for (int i = 0; i<5; i++){
		cout << elements[i] << " ";
	}
	cout << endl;
	reversedArray (elements,5);
	return 0;
}