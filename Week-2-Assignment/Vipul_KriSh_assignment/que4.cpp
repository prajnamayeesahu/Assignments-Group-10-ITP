#include <iostream>
using namespace std;
typedef struct array
{
    int num;
    int rep;
} ar;
int main()
{

    int arr[] = {1, 1, 2, 2, 2, 2, 3, 4, 1};
    int z = sizeof(arr) / sizeof(arr[0]);
    ar arr1[sizeof(arr) / sizeof(arr[0])];
    for (int i = 0; i < z; i++)
    {
        int x;
        int count = 0;
        x = *(arr + i);
        for (int j = 0; j < z; j++)
        {
            if (arr[j] == x)
            {
                count++;
            }
        }
        arr1[i].num = x;
        arr1[i].rep = count;
    }
    int largest = arr1[0].rep;
    int index = 0;
    for (int i = 0; i < z; i++)
    {
        if (arr1[i].rep > largest)
        {
            largest = arr1[i].rep;
            index = i;
        }
    }
    cout << "The largest number of repetitions is: " << largest << endl;
    cout << "The numbers with the largest number of repetitions are: " << arr1[index].num << endl;
    return 0;
}