/*Find the Nth Fibonacci number using recursion. */

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the position of the Fibonacci number you want: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
    }
    
    int result = fibonacci(n);
    cout << "The " << n << "th Fibonacci number is: " << result << endl;
    
    return 0;
}