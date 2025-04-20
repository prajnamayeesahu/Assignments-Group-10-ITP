/*Write a C++ program to find the second smallest elements in a given array of integers(all elements of array distinct).*/
#include <iostream>
#include <climits>
using namespace std;
int find2nd_smallest(int arr[], int a)
{
    if (a < 2)
    {
        cout << "Array having 2 elements" << endl;
        return -1;
    }
    int smallest = INT_MAX;
    int secondsmallest = INT_MAX;
    for (int i = 0; i < a; i++)
    {
        if (arr[i] < smallest)
        {
            secondsmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondsmallest && arr[i] != smallest)
        {
            secondsmallest = arr[i];
        }
    }
    return secondsmallest;
}
int main()
{

    int a;
    cout << "Enter no of elements of an array:";
    cin >> a;
    int arr[a];
    cout << "Enter  distinct elements in array:\n";
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    int b = find2nd_smallest(arr, a);
    if (b != -1)
    {

        cout << "Second smallest element is:" << b << endl;
    }
    return 0;
}