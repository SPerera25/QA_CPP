#include <iostream>
using namespace std;
int main (){
	for (int i=1; i<=6; i++){
		char ch = 'A';
		for (int j=1; j<=i; j++){
		cout<<ch;
			ch++;
		}
		cout<<endl;
	}
 /* A
	AB
	ABC
	ABCD
	ABCDE
	ABCDEF  */
	
	for (int i=1; i<=6; i++){
		char ch = 'A';
		for (int j=6; j>=i; j--){
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
/*	ABCDEF
	ABCDE
	ABCD
	ABC
	AB
	A  */
	
	for (int i=1; i<=6; i++){
		char ch = 'A';
		for (int j=6; j>=i; j--){
			cout<<" ";
		}
		for (int z=1; z<=i; z++){
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
/*	  A
     A B
    A B C
   A B C D
  A B C D E
 A B C D E F  */

	return 0;
}