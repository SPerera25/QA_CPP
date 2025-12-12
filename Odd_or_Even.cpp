#include <iostream>
using namespace std;

int main () {

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (!(cin >> num)) {

        cout << "Invalid input. Please enter an integer." << endl;
        return 1;
        
        /* Means:
              "If reading a number from the user failed, do something." */

        /* return 1; exits the program immediately with a non-zero exit code 
        (1 usually means error).
               This prevents the program from continuing with an invalid value.*/

    }
    else {
        if ( num % 2 == 0 ) {
            cout << "Number, " << num << ", is Even" << endl;
        } 
        else {
             cout << "Number, " << num << ", is Odd" << endl;
        }
    }

    /*  
        cin >> num → tries to read input into num
        ! → checks if it failed
        if (!(cin >> num)) → runs code if input is invalid
        return 1; → stops program due to error  
        
    */
    return 0;
}