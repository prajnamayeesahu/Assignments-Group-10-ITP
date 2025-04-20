/*4. Write a C++ program to find maximum occurring integer in an array.*/
#include <iostream>
using namespace std;

int main()
{

    int a, count = 0, count2 = 0, value = 0;
    cout << "Enter no of elements of an array:";
    cin >> a;
    int arr[a];
    cout << "Enter  elements of the array:\n";
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        count = 0;
        for (int j = 0; j < a; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > count2)
        {
            count2 = count;
            value = arr[i];
        }
    }
    if (count == 0)
    {
        cout << "No max occurence value found." << endl;
        return 0;
    }
    else
    {
        cout << "Maximum occurrence value: " << value << endl;
        cout << "Occurring Frequency: " << count2 << endl;

        return 0;
    }

    return 0;
}