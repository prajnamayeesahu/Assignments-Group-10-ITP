/*
2. Write a C++ program to sort a given array using function.
*/

#include <iostream>
using namespace std;

void ArraySort(int a[],int n) {
    int i,j,t;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] >= a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1]; 
                a[j + 1] = t;
            }
        }
    }
}
int main()
{
    int n,i;
    cout << "Enter size of array : ";
    cin >> n;
    int a[n];
    cout << "Enter array Elements : ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Original array : ";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    ArraySort (a,n);

    cout << "Sorted array : ";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}