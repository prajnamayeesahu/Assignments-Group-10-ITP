/*5. Write a C++ program to remove duplicates from an array and
create a new array and store all distinct elements.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array:";
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int arr2[n], a = 0;

    for (int i = 0; i < n; i++)
    {
        int Duplicates = 0;

        for (int j = 0; j < a; j++)
        {
            if (arr[i] == arr2[j])
            {
                Duplicates = 1;
                break;
            }
        }
        if (!Duplicates)
        {
            arr2[a] = arr[i];
            a++;
        }
    }

    cout << "Array after deleting duplicates: ";
    for (int i = 0; i < a; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}