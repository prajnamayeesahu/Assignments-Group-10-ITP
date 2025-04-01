
/* Write a C++ program to find the largest digit in a number. */

#include <iostream>
#include <cmath>    
using namespace std;
int main() {
    int n, biggest = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        int digit = n % 10; 
        if (digit > biggest) {
            biggest = digit; 
        }
        n /= 10; }

    cout << "The largest digit is: " << biggest << endl;
    
    return 0;
}
