#include <iostream>
using namespace std;
void arrdis(int arr[], int n, int i = 0)
{
    if (i == n)
    {
        return;
    }
    cout << arr[i] << " ";
    arrdis(arr, n, i + 1);
}
int main()
{
    int arr[] = {1, 3, 5, 2, 7, 9, 10, 11, 34, 23, 111, 29, 45, 67, 89, 20, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "THE ARRAY IS:" << endl;
    arrdis(arr, n);
    return 0;
}
