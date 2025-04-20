#include <iostream>
using namespace std;
void rotateRight(int arr[], int n, int k) {
    k = k % n; 
    int temp[n];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    for (int i = k; i < n; i++) {
        temp[i] = arr[i - k];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout << "Enter number of positions to rotate: ";
    cin >> k;
    cout << "Original array: ";
    printArray(arr, n);
    rotateRight(arr, n, k);
    cout << "Array after rotating right by " << k << " positions: ";
    printArray(arr, n);
}
