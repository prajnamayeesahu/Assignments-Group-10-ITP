#include <iostream>
#include <algorithm>
using namespace std;
void sortArray(int arr[], int n) {
    sort(arr, arr + n);
}
int main() {
    int arr[] = {10, 4, 2, 8, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Original array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    sortArray(arr, n);
    cout << "\nSorted array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}