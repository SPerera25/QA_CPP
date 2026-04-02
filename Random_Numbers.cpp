#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// a) Function to return a random integer between X and Y
int RandomNUM(int X, int Y) {
    return X + rand() % (Y - X + 1);
}

// b) Complete Program
int main() {
    srand(time(0)); // Seed for true randomness
    int X, Y;
    int tickets[100][5];

    cout << "Enter Range Start (X): "; cin >> X;
    cout << "Enter Range End (Y): "; cin >> Y;

    if ((Y - X + 1) < 5) {
        cout << "Range too small for 5 distinct numbers!" << endl;
        return 1;
    }

    // Generate 100 tickets
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 5; j++) {
            int num;
            bool duplicate;
            
            // Ensure numbers within a single ticket are distinct
            do {
                duplicate = false;
                num = RandomNUM(X, Y);
                for (int k = 0; k < j; k++) {
                    if (tickets[i][k] == num) {
                        duplicate = true;
                        break;
                    }
                }
            } while (duplicate);
            
            tickets[i][j] = num;
        }
    }

    // Display tickets
    cout << "\nGenerated Lottery Tickets:\n";
    for (int i = 0; i < 100; i++) {
        cout << "Ticket " << i + 1 << ": ";
        for (int j = 0; j < 5; j++) {
            cout << tickets[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}