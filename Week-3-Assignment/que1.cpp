#include <iostream>
using namespace std;
void moveNegativesToLeft(int arr[], int size) {
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            if (i != j) {
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main() {
    int arr[] = { -11, 20, -31, 40, -5, 6, 7, 8 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    printArray(arr, size);
    moveNegativesToLeft(arr, size);
    cout << "Array after moving negatives: ";
    printArray(arr, size);
}
