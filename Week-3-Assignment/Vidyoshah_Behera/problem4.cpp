/*4. Write a C++ program to rotate an array to the right by k
positions.*/

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter number of positions to rotate:";
    cin >> k;
    k = k % n;

    if (k == 0 || n == 0)
    {
        cout << "No rotation needed." << endl;
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
        return 0;
    }
    else
    {
        int temp[k];
        for (int i = 0; i < k; i++)
        {
            temp[i] = arr[n - k + i];
        }
        for (int i = n - 1; i >= k; i--)
        {
            arr[i] = arr[i - k];
        }
        for (int i = 0; i < k; i++)
        {
            arr[i] = temp[i];
        }

        cout << "Array after rotation to right by " << k << " positions: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}