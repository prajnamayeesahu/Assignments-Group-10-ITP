/*1. Take two array as input, merge them and print it in reverse order
using loop*/
#include <iostream>
using namespace std;

int main()
{
    int a, b, i, j;
    cout << "Enter the size of 1st array:" << endl;
    cin >> a;

    int a1[a], a2[b], a3[a + b];

    cout << "Enter elements of 1st array: ";

    for (int i = 0; i < a; i++)
    {
        cin >> a1[i];
        a3[i] = a1[i];
    }

    cout << "Enter the size of 2nd array: ";
    cin >> b;
    cout << "Enter elements of second array: ";

    for (int i = 0; i < b; i++)
    {
        cin >> a2[i];
        a3[a + i] = a2[i];
    }

    cout << "Merged  both array in reverse order: ";
    for (int j = a + b - 1; j >= 0; j--)
    {
        cout << a3[j] << " ";
    }

    return 0;
}