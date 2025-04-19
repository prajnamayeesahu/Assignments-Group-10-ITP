/*
4. Write a C++ program to find maximum occurring integer in an array.
*/

#include <iostream>
using namespace std;
int max_occuring_int(int a1[], int n) {
    int count;
    int temp = 0, a = 0;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a1[i] == a1[j])
            {
                count++;
            }
        }
        if (count > temp)
        {
            temp = count;
            a = i;
        }
    }
    return a1[a];
}

int main()
{
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int a1[n];
    cout << "enter elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    cout << endl;
    cout << "maximum occuring integer in this array : " << max_occuring_int(a1, n);
    return 0;
}