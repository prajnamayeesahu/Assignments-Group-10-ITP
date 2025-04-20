/*
4. Write a C++ program to rotate an array to the right by k
positions.
*/

#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int n,k,i;
    cout << "Enter the size of array : ";
    cin >> n;
    int a[n];
    cout << "Enter array elements: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter value of k (positions to rotate) : ";
    cin >> k;
    k = k % n;
    int r[n];
    for (i = 0; i < n; i++) {
        r[(i + k) % n] = a[i];
    }
    for (int i = 0; i < n; i++) {
        a[i] = r[i];
    }
    cout << "Array after rotation by " << k << " positions: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0; 
}