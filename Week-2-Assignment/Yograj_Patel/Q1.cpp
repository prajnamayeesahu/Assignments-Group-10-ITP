/*
1. Take two array as input, merge them and print it in reverse order
using loop
*/

#include <iostream>
using namespace std;
int main()
{
    int n1,n2,i;
    cout << "Enter size of array-1 : ";
    cin >> n1;
    cout << "Enter size of array-2 : ";
    cin >> n2;
    int a1[n1],a2[n2];
    cout << "Enter elements of array-1 : ";
    for (i = 0; i < n1; i++) {
        cin >> a1[i];
    }
    cout << "Enter elements of array-2 : ";
    for (i = 0; i < n2; i++) {
        cin >> a2[i];
    }
    int m[n1 + n2];
    for (i = 0; i < n1; i++) {
        m[i] = a1[i];
    }
    for (i = 0; i < n2; i++) {
        m[n1 + i] = a2[i];
    }
    cout << "Merged array : ";
    for (i = 0; i < n1 + n2; i++) {
        cout << m[i] << " ";
    }
    cout << endl;
    cout << "Merged array in Reverse order : ";
    for (i = n1 + n2 - 1; i >= 0 ; i--) {
        cout << m[i] << " ";
    }
    return 0;
} 

