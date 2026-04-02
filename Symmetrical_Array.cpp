#include <iostream>
using namespace std;

void reversedArray (int arr[],int rev[], int size){

	for (int i = 0; i<size ; i++){
		rev[i] = arr[size -1 -i];
	} 
	for(int i=0; i<size ; i++){
		cout << rev[i] << " ";
	}
}

bool checkSymmetricalArray(int arr[], int rev[], int size){
	for(int i=0; i<size; i++){
		if (arr[i] != rev[i]){
			return false;
		}
	}
	return true;
}

int main (){
	
	int org[5] = {10,20,30,40,50};
	int rev[5];

	cout << "Original Array = " ;
	for (int i = 0; i<5; i++){
		cout << org[i] << " ";
	}

	cout << endl;

	cout << "Reversed Array = ";
	reversedArray (org,rev,5);

	cout << endl;

	if(checkSymmetricalArray (org,rev,5)){
		cout << "The given arrays are symmetrical." << endl;
	}
	else{
		cout << "The given arrays are not symmetrical." << endl;
	}

	return 0;
}

