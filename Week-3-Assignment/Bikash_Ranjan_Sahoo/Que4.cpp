/*Write a C++ program to rotate an array to the right by k
positions.*/

#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k) {
    k = k % n; 
    int temp[n];


    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    
    for (int i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }

    
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; 

    cout << "Original array: ";
    printArray(arr, n);

    rotateArray(arr, n, k);

    cout << "Array after rotation: ";
    printArray(arr, n);

    return 0;
}