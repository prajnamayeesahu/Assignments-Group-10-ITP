/*Write a C++ program to find maximum occurring integer in an array*/

#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxCount = 0, maxNum = arr[0];

    for (int i = 0; i < n; i++) {
        count = 0; // Reset count for each element
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxNum = arr[i];
        }

      
    }
    if(count == 0)
    {
        cout << "No maximum occurring integer found." << endl;
        return 0;
    }

    cout << "Maximum occurring integer: " << maxNum << endl;
    return 0;
}

