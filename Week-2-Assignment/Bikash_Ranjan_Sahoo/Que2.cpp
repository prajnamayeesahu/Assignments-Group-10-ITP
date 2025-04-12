/* Write a C++ program to sort a given array using function. */

#include<iostream>
using namespace std;

void sortArray(int NumArray[], int n) {
    for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
        if (NumArray[j] > NumArray[j + 1]) {
            int temp = NumArray[j];
            NumArray[j] = NumArray[j + 1];
            NumArray[j + 1] = temp;
            }
        }
    }
}

int main() {
int n;
cout << "Enter the size of the array: ";
cin >> n;

int NumArray[n];
cout << "Enter elements of the array: ";
for (int i = 0; i < n; i++) {
    cin >> NumArray[i];
}
    sortArray(NumArray, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << NumArray[i] << " ";
    }
    return 0;
}

