/*Write a C++ program to copy the elements of one array into another array*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int original[n], copy[n];

    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> original[i];
        copy[i] = original[i];
    }

    cout << "Elements of the copied array: ";
    for (int i = 0; i < n; i++) 
        {
            cout << copy[i] << " ";
        }
    return 0;
}