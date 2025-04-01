#include <iostream>
using namespace std;

bool PerfectSquare(int number) {
    if (number < 0) {
        return false; // Negative numbers cannot be perfect squares
    }

    int i = 0; // Start from 0
    while (i * i <= number) {
        if (i * i == number) {
            return true; // Found the perfect square
        }
        i++;
    }
    return false; // Not a perfect square
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (PerfectSquare(number)) {
        cout <<" The number is a perfect square." << endl;
    } else {
        cout <<" the number is NOT a perfect square." << endl;
    }

    return 0;
}