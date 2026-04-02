#include <iostream>
using namespace std;
int main (){
    float marks;
    char grade;
    cout<<"Enter your marks";
    cin>>marks;
    if (marks>=75 && marks<=100) {
        grade = 'A';
    }
    else if (marks>=51 && marks<=74) {
        grade = 'B';
    }
    else if (marks>=41 && marks<=50) {
        grade = 'C';
    }
    else if (marks>=31 && marks<=40) {
        grade = 'D';
    }
    else if (marks>=00 && marks<=30) {
        grade = 'E';
    }
    else {
        cout<<"You have entered invalid marks";
    }

    cout << "Your grade is: " << grade << endl;
    return 0;
}
/*  OR WE CAN WRITE THE CODE AS FOLLOWS:

    if (marks > 100 || marks < 0) {
        cout << "Invalid marks";
    }
    else if (marks >= 75) cout << "A grade";
    else if (marks >= 51) cout << "B grade";
    else if (marks >= 41) cout << "C grade";
    else if (marks >= 31) cout << "D grade";
    else cout << "E grade";

*/