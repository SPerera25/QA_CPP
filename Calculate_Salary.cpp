/*Calculate employee salary after applying several updates using
assignment operators.
The base salary is $50,000.
The employee gets a 10% raise, then a $2000 bonus,
then a $1500 deduction for taxes. Print the final salary.*/

#include <iostream>
using namespace std;
int main () {
    int salary = 50000;
    salary += salary * (10.0/100); // 10% raise
    /*In that percentage, we have to make one or the both numbers decimal.
    Because dividing decimal numbers give a decimal number.
    Or
    we can put 0.10 there.*/
    salary += 2000;          // $2000 bonus
    salary -= 1500;          // $1500 deduction for taxes
    cout << "The final salary is $" << salary << endl;
    return 0;
}
