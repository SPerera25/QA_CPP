#include <iostream>
using namespace std;

void reversedArray (int arr[],int arrNew[], int size){
	cout << "Reversed Array = " ;
	for (int i = 0; i<=size-1; i++){
		arrNew[i] = arr[size-i-1];
		cout << arrNew[i] << " ";
	}
}
void checkSymmetrical (int arr[],int size){
	string state = "";
	cout << "\nIs the array Symmetrical? ";
	for (int j = 0; j<=size-1; j++){
		if (arr[j]!=arr[size-1-j]){
			state = "No";
			break;
		}
		state = "Yes";
	}
	cout << state;
}
int main (){
	int rev[5];
	int original[5] = {10,20,30,50,10};
	cout << "Original Array = " ;
	for (int i = 0; i<5; i++){
		cout << original[i] << " ";
	}
	cout << endl;
	reversedArray (original,rev,5);
	checkSymmetrical (original,5);
	return 0;
}