/*Write a C++ program to remove duplicates from an array and create a new array and store all distinct elements.*/

#include <iostream>
#include <algorithm> // For std::sort and std::unique
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 2, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    sort(arr, arr + n);

    
    int* end = unique(arr, arr + n);

   
    int distinctElementsSize = end - arr;
    int distinctElements[distinctElementsSize];
    for (int i = 0; i < distinctElementsSize; ++i) {
        distinctElements[i] = arr[i];
    }

  
    cout << "Distinct elements: ";
    for (int elem : distinctElements) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}

