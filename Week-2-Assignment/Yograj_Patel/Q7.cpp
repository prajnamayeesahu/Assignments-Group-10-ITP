/*
7. Find the Nth Fibonacci number using recursion.
*/

#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);        
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << n << "th Fibonacci number : " << fib(n);
    return 0;
}