/*Find the Nth Fibonacci number using recursion. */


#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 1 || n==2)  {
        return n-1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n ;
    cout <<"Enter the number of terms for fibonacci series:";
    cin >> n;
    int num=fibonacci(n);
    cout <<" The value of "<< n ;
    cout<<"th element of fibonacci series is:"<< num ;
    return 0;
}