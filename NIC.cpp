#include <iostream>

using namespace std;

// a) Function to get a substring
char* SUBSTRING(char NIC[], int S, int E) {
    static char sub[20];
    int j = 0;
    for (int i = S; i < S + E; i++) {
        sub[j++] = NIC[i];
    }
    sub[j] = '\0';
    return sub;
}

// b) Function to return string length
int LEN(char STR[]) {
    int count = 0;
    while (STR[count] != '\0') {
        count++;
    }
    return count;
}

// c) Function to convert numeric text to integer
int TextTOValue(char TEX[]) {
    int val = 0;
    for (int i = 0; TEX[i] != '\0'; i++) {
        val = val * 10 + (TEX[i] - 48); // Subtracting ASCII '0'
    }
    return val;
}

// d) Function to return days in a month (per the provided table)
int MonthDAYS(int month) {
    if (month == 2) return 29;
    if (month == 4 || month == 6 || month == 8 || month == 9 || month == 11) return 30;
    return 31;
}

// e) Complete Program Logic
int main() {
    char nic[13];
    cout << "Enter NIC Number (New Format): ";
    cin >> nic;

    // Extract Year (first 4 digits)
    int year = TextTOValue(SUBSTRING(nic, 0, 4));

    // Extract Days (digits 5, 6, 7)
    int totalDays = TextTOValue(SUBSTRING(nic, 4, 3));

    // Identify Gender
    string gender = "Male";
    if (totalDays > 500) {
        gender = "Female";
        totalDays -= 500;
    }

    // Calculate Month and Day
    int month = 1;
    while (totalDays > MonthDAYS(month)) {
        totalDays -= MonthDAYS(month);
        month++;
    }

    cout << "\n--- Result ---" << endl;
    cout << "Birth Year : " << year << endl;
    cout << "Gender     : " << gender << endl;
    cout << "Birth Date : " << year << "/" << month << "/" << totalDays << endl;

    return 0;
}