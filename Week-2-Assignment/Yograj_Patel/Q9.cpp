/*
9. Print all elements of an array using recursion.
*/

#include <iostream>
using namespace std;

int printArr(int a[],int i,int n) {
    if(i < n) {
        cout << a[i] << " ";
        printArr(a,i + 1,n);
    }
}

int main()
{
    int n,i;
    cout << "Enter size of array : ";
    cin >> n;
    int a[n];
    cout << "Enter array elements : ";
    for (i = 0; i < n; i++) {
        cin >>  a[i];
    }
    cout << "The array is : ";
    printArr(a,0,n);
    return 0;
}