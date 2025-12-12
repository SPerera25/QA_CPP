#include <iostream>
using namespace std;
int main (){
    float marks;
    cout<<"Enter your marks";
    cin>>marks;
    if (marks>=75 && marks<=100) {
        cout<<"You got A grade";
    }
    else if (marks>=51 && marks<=74) {
        cout<<"You got B grade";
    }
    else if (marks>=41 && marks<=50) {
        cout<<"You got C grade";
    }
    else if (marks>=31 && marks<=40) {
        cout<<"You got D grade";
    }
    else if (marks>=00 && marks<=30) {
        cout<<"You got E grade";
    }
    else {
        cout<<"You have entered invalid marks";
    }
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