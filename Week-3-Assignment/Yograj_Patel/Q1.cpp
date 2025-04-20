/*
1. Write a C++ program to move all the negative elements to one
side of the array.
*/

#include <iostream>
using namespace std;
int main() 
{
    int n,i;
    cout << "Enter size of the array : ";
    cin >> n;
    int a[n];
    cout << "Enter array elements : ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    int j = 0; 
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            if (i != j) { 
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            j++;
        }
    }
    cout << "The array after move all the negative elements to one side of the array : ";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}