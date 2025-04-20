/*Write a C++ program that takes two 2D matrices (matrices) of size
3×3 as input from the user. First, the program should calculate and
print the sum of the two original matrices. After that, it should compute
the transpose of both the original matrices. Finally, the program
should calculate and display the sum of the two transposed matrices
as well.*/

#include <iostream>
using namespace std;

int main()
{
    int a;
    int arr1[3][3], arr2[3][3], sum[3][3], sum2[3][3];
    cout << "Enter  elements of the  first 3x3 matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr1[i][j];
        }
    }


    cout << "Enter  elements of the  second 3x3 matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr2[i][j];
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }


    cout << "Sum of two 3x3 matrices:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    cout << "1st Matrix:\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }



    int transpose[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[i][j] = arr1[j][i];
        }
    }


    cout << "Transpose of 1st matrices:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }



    cout << "2nd Matrix:\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }



    int transpose2[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose2[i][j] = arr2[j][i];
        }
    }


    cout << "Transpose of 2nd matrices:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << transpose2[i][j] << " ";
            sum2[i][j] = transpose[i][j] + transpose2[i][j];
        }
        cout << endl;
    }


    
    cout << "Sum of two  transpose 3x3 matrices:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << sum2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}