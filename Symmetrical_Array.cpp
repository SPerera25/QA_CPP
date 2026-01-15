#include <iostream>
using namespace std;

int reversedArray (int arr[], int size){
	int elements;
	cout << "Reversed Array = " ;
	for (int i = size-1; i>=0; i--){
		cout << arr[i] << " ";
		int arr[5];
		arr[i] = elements(size -1 -i);
	} return arr[];
}
void checkSymmetricalArray (int arr[], int size){
	int elements[];
	
	cout << "Is the array Symmetrical? ";
	for (int i = 0; i <= size-1; i++){
		if (elements[i]!=elements[size -1-i])
			cout << "No";
	}
	cout << "Yes";
}
int main (){
	
	int elements[5] = {10,20,30,40,50};
	cout << "Original Array = " ;
	for (int i = 0; i<5; i++){
		cout << elements[i] << " ";
	}
	cout << endl;
	reversedArray (elements,5);
	checkSymmetricalArray (arr1,5);
	return 0;
}

