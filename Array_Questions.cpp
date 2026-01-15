#include <iostream>
using namespace std;

const int SIZE = 5;

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Reverse array into a new array
void reverseArray(int original[], int reversed[], int size) {
    for (int i = 0; i < size; i++)
        reversed[i] = original[size - 1 - i];
}

// Check if array is symmetrical
bool isSymmetrical(int original[], int reversed[], int size) {
    for (int i = 0; i < size; i++) {
        if (original[i] != reversed[i])
            return false;
    }
    return true;
}

// Find maximum value
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

// Find minimum value
int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

// Sum of elements
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

// Count even and odd numbers
void countEvenOdd(int arr[], int size) {
    int even = 0, odd = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "Even Count: " << even << ", ";
    cout << "Odd Count: " << odd << endl;
}

// Difference between arrays
void differenceArray(int original[], int reversed[], int diff[], int size) {
    for (int i = 0; i < size; i++)
        diff[i] = original[i] - reversed[i];
}

// Check if all elements are unique
bool areUnique(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j])
                return false;
        }
    }
    return true;
}

// Calculate average
double averageArray(int arr[], int size) {
    return (double)sumArray(arr, size) / size;
}

// Reverse array in-place
void reverseInPlace(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {

    // 1. Create and print array
    int original[SIZE] = {10, 20, 30, 40, 50};
    int reversed[SIZE], diff[SIZE];

    cout << "Original Array: ";
    printArray(original, SIZE);

    // 2. Reverse array
    reverseArray(original, reversed, SIZE);
    cout << "Reversed Array: ";
    printArray(reversed, SIZE);

    // 3. Check symmetry
    if (isSymmetrical(original, reversed, SIZE))
        cout << "Is the array Symmetrical? Yes" << endl;
    else
        cout << "Is the array Symmetrical? No" << endl;

    // 4. Maximum in reversed array
    cout << "Maximum value in reversed array: "
         << findMax(reversed, SIZE) << endl;

    // 5. Minimum in original array
    cout << "Minimum value in original array: "
         << findMin(original, SIZE) << endl;

    // 6. Sum of elements
    cout << "Sum of original array: "
         << sumArray(original, SIZE) << endl;
    cout << "Sum of reversed array: "
         << sumArray(reversed, SIZE) << endl;

    // 7. Count even and odd
    countEvenOdd(original, SIZE);

    // 8. Difference array
    differenceArray(original, reversed, diff, SIZE);
    cout << "Differences between Original and Reversed Arrays: ";
    printArray(diff, SIZE);

    // 9. Check uniqueness
    if (areUnique(original, SIZE))
        cout << "Are all elements in the original array unique? Yes" << endl;
    else
        cout << "Are all elements in the original array unique? No" << endl;

    // 10. Average of elements
    cout << "Average of original array: "
         << averageArray(original, SIZE) << endl;

    // 11. Reverse original array in-place
    reverseInPlace(original, SIZE);
    cout << "Original array after in-place reverse: ";
    printArray(original, SIZE);

    return 0;
}
