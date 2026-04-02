#include <iostream>
#include <string>

using namespace std;

int main() {
    char seats[13][6];
    // Initialize all seats as available (*)
    for(int i=0; i<13; i++)
        for(int j=0; j<6; j++) seats[i][j] = '*';

    while (true) {
        cout << "\nRows 1 and 2 are first class (FC)\nRows 3 through 7 are business class (BC)\nRows 8 through 13 are economy class (EC)\n";
        cout << "  A B C D E F\n";
        for (int i = 0; i < 13; i++) {
            cout << "Row " << i + 1 << (i < 9 ? "  " : " ");
            for (int j = 0; j < 6; j++) cout << seats[i][j] << " ";
            cout << endl;
        }

        string type;
        int rowStart, rowEnd;
        cout << "\nEnter Ticket type (FC, BC, or EC) or 'Exit': ";
        cin >> type;

        if (type == "Exit") break;

        if (type == "FC") { rowStart = 0; rowEnd = 1; }
        else if (type == "BC") { rowStart = 2; rowEnd = 6; }
        else if (type == "EC") { rowStart = 7; rowEnd = 12; }
        else { cout << "Invalid type!"; continue; }

        int chosenRow;
        char chosenCol;
        cout << "Enter desired seat (e.g., 1 A): ";
        cin >> chosenRow >> chosenCol;

        int colIdx = chosenCol - 'A';
        int rowIdx = chosenRow - 1;

        if (rowIdx >= rowStart && rowIdx <= rowEnd && colIdx >= 0 && colIdx < 6) {
            if (seats[rowIdx][colIdx] == '*') {
                seats[rowIdx][colIdx] = 'X';
                cout << "Seat reserved successfully!\n";
            } else {
                cout << "Seat already occupied!\n";
            }
        } else {
            cout << "Invalid row/column for this ticket type.\n";
        }
    }
    return 0;
}