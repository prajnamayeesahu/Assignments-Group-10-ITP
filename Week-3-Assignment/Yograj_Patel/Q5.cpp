/*
5. Write a C++ program to remove duplicates from an array and
create a new array and store all distinct elements
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n], unique[n], c = 0;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < c; j++) {
            if (arr[i] == unique[j]) {
                break;
            }
        }
        if (j == c) { 
            unique[c] = arr[i];
            c++;
        }
    }
    cout << "Array with distinct elements: ";
    for (int i = 0; i < c; i++) {
        cout << unique[i] << " ";
    }
    cout << endl;
    return 0;
}