#include <iostream>
using namespace std;
int main()
{
    cout << "Input values in the first array" << endl;
    int i = 0;
    int arr1[5];
    int arr2[5];
    while (i < 5)
    {
        cout << "Value at " << i << " ";
        cin >> arr1[i];
        i++;
    }
    int j = 0;
    while (j < 5)
    {
        cout << "Value at " << j << " ";
        cin >> arr2[j];
        j++;
    }
    int arr3[10];
    for (i = 0; i < 5; i++)
    {
        arr3[i] = arr1[i];
    }
    for (i = 5; i < 10; i++)
    {
        arr3[i] = arr2[i - 5];
    }
    i = 0;
    while (i < 10)
    {
        cout << arr3[9 - i] << endl;
        i++;
    }
    return 0;
}