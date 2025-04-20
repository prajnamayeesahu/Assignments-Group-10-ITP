/*1. Write a C++ program to move all the negative elements to one
side of the array.*/

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter no of elements of an array:";
    cin >> a;
    int arr[a];
    cout << "Enter  elements of the array:\n";
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    int j = 0;
    cout << "Original array:";
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < a; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
    cout << "Array after moving negative to one side:";
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}