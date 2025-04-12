/*Print all elements of an array using recursion.*/

#include <iostream>
using namespace std;

void printArray(int arr[], int size, int n) {
    if (n == size) {
        return;
    }
    cout << arr[n] << " ";
    printArray(arr, size, n + 1);
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Array elements: ";
    printArray(arr, size, 0);
    cout << endl;
    return 0;
}
