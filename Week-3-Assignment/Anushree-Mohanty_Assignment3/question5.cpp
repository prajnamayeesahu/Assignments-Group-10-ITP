#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int unique[n];
    int count = 0;

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < count; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            unique[count] = arr[i];
            count++;
        }
    }

    cout << "Array with distinct elements: ";
    for (int i = 0; i < count; i++) {
        cout << unique[i] << " ";
    }
    cout << endl;

    return 0;
}
