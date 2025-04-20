/*
3. Write a C++ program to copy the elements of one array into another
array.
*/

#include <iostream>
using namespace std;
int main ()
{
    int n,i;
    cout << "Enter size of array : ";
    cin >> n;
    int a[n];
    cout << "Enter array elements : ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    } 
    cout << "Original array : ";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    int b[n];
    for (i = 0; i < n; i++) {
        b[i] = a[i];
    } 
    cout << endl;
    cout << "Coppied array : ";
    for (i = 0; i < n; i++) {
        cout << b[i] << " ";
    } 
}