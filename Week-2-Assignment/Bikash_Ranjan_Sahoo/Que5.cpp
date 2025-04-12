/*Write a C++ program to find the second smallest elements in a given array of integers(all elements of array distinct).*/
#include <iostream>
#include <limits.h> 
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int smallest = INT_MAX, secondSmallest = INT_MAX;

    
    if (n < 2) {
        cout << "Enter elements of the array: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }
    
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    cout << "Error: Array elements are not distinct." << endl;
                    return 1;
                }
            }
        }

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    if (secondSmallest == INT_MAX) {
        cout << "No second smallest element found." << endl;
    } else {
        cout << "Second smallest element: " << secondSmallest << endl;
    }

    return 0;
}
