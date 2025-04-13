#include <iostream>
using namespace std;
int mysort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
    cout << "The Second Largest no. in array is :" << arr[n - 2] << endl;
}
int main()
{
    int arr[] = {1, 3, 5, 2, 7, 9, 10, 11, 34, 23, 111, 29, 45, 67, 89, 20, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    mysort(arr, n);
}