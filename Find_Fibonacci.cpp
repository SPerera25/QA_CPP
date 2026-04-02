#include <iostream>
using namespace std;

int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1)+fib(n-2);
}

int main(){

    int num;
    cout << "Enter a number to find its Fibonacci value: ";
    cin >> num;

    cout << "Fibonacci: " << fib(num);
    return 0;
    
}