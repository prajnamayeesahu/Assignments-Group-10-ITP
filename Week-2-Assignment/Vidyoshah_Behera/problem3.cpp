/*3. Write a C++ program to copy the elements of one array into another
array.*/
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter no of elements of an array:";
    cin >> a;
    int arr[a], cpyarr[a];
    cout << "Enter  elements of the array:\n";
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
        cpyarr[i] = arr[i];
    }
    cout << "Original array:\n";
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
    cout<< endl;
    cout << "Copied array:\n";
    for (int i = 0; i < a; i++)
    {
        cout << cpyarr[i] << " ";
    }

    return 0;
}