#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int arr2[sizeof(arr) / sizeof(arr[0])];
    cout << "Array 1: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr[i];
    }
    cout << "Array 2: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }
}