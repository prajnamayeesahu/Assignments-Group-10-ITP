/*Write a C++ program to move all the negative elements to one
side of the array*/

#include <iostream>
using namespace std;

void rearrange(int arr[], int n) {
    int j = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    int arr[] = {12, -7, 9, -3, 5, -1};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    cout << "Array after rearranging: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

