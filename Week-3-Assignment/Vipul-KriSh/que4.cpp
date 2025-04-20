#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter size of the array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number of positions to rotate: ";
    cin >> k;
    int *temp = new int[k];
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

    cout << " NEw Array after rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}