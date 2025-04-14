#include <iostream>
using namespace std;
int sortarr(int arr[])
{
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j + 1] + arr[j];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {3, 4, 2, 1, 5, 0};
    int *p;
    p = arr;
    cout << "The array is: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << *(p + i) << " ";
    }
    cout << endl;
    cout << "Sorting the array" << endl;
    sortarr(arr);
}