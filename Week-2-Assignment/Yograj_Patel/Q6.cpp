/*
6. Write a C++ program that takes two 2D arrays (matrices) of size
3×3 as input from the user. First, the program should calculate and
print the sum of the two original matrices. After that, it should compute
the transpose of both the original matrices. Finally, the program
should calculate and display the sum of the two transposed matrices
as well
*/

#include <iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],i,j;
    cout << "Enter elements of Matrix_1 (3x3) : ";
    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Matrix_1" << endl;
    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter elements of Matrix_2 (3x3) : ";
    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cin >> b[i][j];
        }
    }
    cout << "Matrix_2" << endl;
    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    int c[3][3];
    cout << "The sum of matriix_1 and matrix_2" << endl;
    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    int a_t[3][3],b_t[3][3];

    for(i = 0; i < 3; i++) {
        for (j = 0; j < 3; j ++) {
            a_t[j][i] = a[i][j];
        }
    }
    cout << "Transpose of Matrix_1" << endl;
    for(i = 0; i < 3; i++) {
        for (j = 0; j < 3; j ++) {
            cout << a_t[i][j] << " ";
        }
        cout << endl;
    }
    for(i = 0; i < 3; i++) {
        for (j = 0; j < 3; j ++) {
            b_t[j][i] = b[i][j];
        }
    }
    cout << "Transpose of Matrix_1" << endl;
    for(i = 0; i < 3; i++) {
        for (j = 0; j < 3; j ++) {
            cout << b_t[i][j] << " ";
        }
        cout << endl;
    }
    int c_t[3][3];
    cout << "The sum of transpose of Matrix_1 and MAtrix_2" << endl; 
    for(i = 0; i < 3; i++) {
        for (j = 0; j < 3; j ++) {
            c_t[i][j] = a_t[i][j] + b_t[i][j];
            cout << c_t[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
