/*9. Print all elements of an array using recursion*/
#include <iostream>
using namespace std;
void Print_Array(int arr[], int n, int size)
{
    if (n == size)
    {
        return;
    }
    cout << arr[n] << " ";
    Print_Array(arr, n + 1, size);
}



int main()
{
    int n;
    cout << "Enter no of elements of an array:";
    cin >> n;
    int arr[n];
    cout << "Enter  distinct elements in array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array elements: ";

    Print_Array(arr, 0, size);

    cout << endl;

    return 0;
}