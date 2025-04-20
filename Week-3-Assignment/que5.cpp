#include <iostream>
using namespace std;
bool isPresent(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element)
            return true;
    }
    return false;
}
int main() {
    int original[] = {1, 2, 3, 2, 4, 1, 5, 6, 3};
    int size = sizeof(original) / sizeof(original[0]);
    int distinct[size];
    int newSize = 0;
    for (int i = 0; i < size; i++) {
        if (!isPresent(distinct, newSize, original[i])) {
            distinct[newSize] = original[i];
            newSize++;
        }
    }
    cout << "Array with distinct elements: ";
    for (int i = 0; i < newSize; i++) {
        cout << distinct[i] << " ";
    }
    cout << endl;
}
