/*Write a C++ program to check if a Number is Perfect square using loops*/
#include <iostream>
using namespace std;
int main()
{
    int i, n, a;
    cout << "Enter a Number:";
    cin >> n;
    for (i = 1; i * i <= n; i++)
    {
        if (i * i == n)
        {
            a = 1;
            break;
        }
    }
    if (a == 1)
    {
        cout << "Perfect square";
    }
    else
    {
        cout << "Not a Perfect Square";
    }
    return 0;
}