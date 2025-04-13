#include <iostream>
using namespace std;
int sumdig(int n)
{
    int sum = 0;
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return sum = n % 10 + sumdig(n / 10);
    }
}
int main()
{
    int n;
    cout << "Enter a number ";
    cin >> n;
    cout << "Sum of the digits of " << n << " is: " << sumdig(n) << endl;
}