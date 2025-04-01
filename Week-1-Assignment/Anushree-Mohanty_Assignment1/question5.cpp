#include <iostream>
using namespace std;

bool PerfectSquare(int num) {
    if (num < 0) {
        return false; 
    }

    int i = 0; 
    while (i * i <= num) {
        if (i * i == num) {
            return true; 
        }
        i++;
    }
    return false; 
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (PerfectSquare(num)) {
        cout <<" The number is a perfect square." << endl;
    } else {
        cout <<" the number is NOT a perfect square." << endl;
    }

    return 0;
}