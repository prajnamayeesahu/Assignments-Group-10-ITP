#include <iostream>
#include <climits>
using namespace std;
int main() {
    int arr[] = {12, 13, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (n < 2) {
        cout << "Array must have at least two elements." << endl;
        return 0;
    }
    int smallest = INT_MAX; 
    int second_smallest = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }
    if(second_smallest == INT_MAX){
        cout << "Second smallest element not found (all elements are the same)." << endl;
        return 0;
    }
    cout << "The second smallest element is: " << second_smallest << endl;
    return 0;
}