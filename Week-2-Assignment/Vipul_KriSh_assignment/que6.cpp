#include <iostream>
using namespace std;
int sumar(int arr[3][3]);
int arrtranspose(int arr[3][3]);
// This function takes two 3x3 matrices as input and returns their sum.
int arrtranssum(int arr1[3][3], int arr2[3][3])
{
    int arr3[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = arr1[j][i] + arr2[j][i];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
}
// This function takes a 3x3 matrix as input and returns its transpose.
int arrtranspose(int arr[3][3])
{
    int i, j;
    int arrx[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            arrx[i][j] = arr[j][i];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arrx[i][j] << " ";
        }
        cout << endl;
    }
}
// This function takes a 3x3 matrix as input and returns the sum of its elements.
int sumar(int arr[3][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main()
{
    int n;
    int arr1[3][3], arr2[3][3], arr3[3][3];
    cout << "Enter the size of the Matrix 1" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element at " << "(" << i << "," << j << ")";
            cin >> arr1[i][j];
        }
    }
    cout << "Enter the size of the Matrix 2" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element at " << "(" << i << "," << j << ")";
            cin >> arr2[i][j];
        }
    }
    cout << "The sum of elements of Matrix  1 :" << sumar(arr1) << endl;
    cout << "The sum of elements of Matrix  2 :" << sumar(arr2) << endl;
    cout << "The Transpose of Matrix 1 is" << endl;
    arrtranspose(arr1);
    cout << "The Transpose of Matrix 2 is" << endl;
    arrtranspose(arr2);
    cout << "The sum of two transposed Matrices 1 and 2 is" << endl;
    arrtranssum(arr1, arr2);
}
