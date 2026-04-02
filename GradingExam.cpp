#include <iostream>
using namespace std;
int main(){
	
	double marks;
	
	cout << "Enter your marks: ";
	cin >> marks;
	
	if (marks>=80){
		cout << "Your grade: A+" << endl;
		cout << "Your GPA: 4.0" << endl;
	}
	else if (marks>=70 && marks<=79){
		cout << "Your grade: A" << endl;
		cout << "Your GPA: 3.6" << endl;
	}
	else if (marks>=65 && marks<=69){
		cout << "Your grade: B+" << endl;
		cout << "Your GPA: 3.2" << endl;
	}
	else if (marks>=60 && marks<=64){
		cout << "Your grade: B" << endl;
		cout << "Your GPA: 2.8" << endl;
	}
	else if (marks>=55 && marks<=59){
		cout << "Your grade: C+" << endl;
		cout << "Your GPA: 2.4" << endl;
	}
	else if (marks>=50 && marks<=54){
		cout << "Your grade: C" << endl;
		cout << "Your GPA: 2.0" << endl;
	}
	else if (marks>=45 && marks<=49){
		cout << "Your grade: D" << endl;
		cout << "Your GPA: 1.6" << endl;
	}
	else if (marks>=40 && marks<=44){
		cout << "Your grade: E" << endl;
		cout << "Your GPA: 1.2" << endl;
	}
	else if (marks<=40){
		cout << "Your grade: F" << endl;
		cout << "Your GPA: 0.8" << endl;
	}
	return 0;
}