#include <iostream>
using namespace std;

void printPattern(int n) {
    int value = 1; // Starting number of the pattern
    for (int i = 0; i < n; i++) { // Loop through rows
        for (int j = 0; j < n; j++) { // Loop through columns
            cout << value; // Print current value
            if (j < n - 1) {
                cout << "*"; // Print '*' between numbers
            }
            value++; // Increment value
        }
        cout << endl; // Move to the next line after a row
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    printPattern(n);

    return 0;
}