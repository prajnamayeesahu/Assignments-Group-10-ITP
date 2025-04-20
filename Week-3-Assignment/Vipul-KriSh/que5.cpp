#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter  elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int *distinct = new int[n], distinctCount = 0;
    for (int i = 0; i < n; i++)
    {
        bool isDuplicate = false;
        for (int j = 0; j < distinctCount; j++)
        {
            if (arr[i] == distinct[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            distinct[distinctCount] = arr[i];
            distinctCount++;
        }
    }
    cout << " New Array with distinct elements: ";
    for (int i = 0; i < distinctCount; i++)
    {
        cout << distinct[i] << " ";
    }
    cout << endl;
    delete[] arr;
    delete[] distinct;

    return 0;
}