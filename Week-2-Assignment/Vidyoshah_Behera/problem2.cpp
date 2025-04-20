/*2. Write a C++ program to sort a given array using function.*/
#include <iostream>
using namespace std;
void Sort_array(int arr[], int a)
{
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

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
    Sort_array(arr, a);
    cout << "Sorted array:\n";
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
        
    }

    return 0;
}