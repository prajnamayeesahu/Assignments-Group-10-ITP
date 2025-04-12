/*Write a C++ program that takes two 2D arrays (matrices) of size 3×3 as input from the user. First, the program should calculate and
print the sum of the two original matrices. After that, it should compute the transpose of both the original matrices. Finally, the program
should calculate and display the sum of the two transposed matrices as well. */

#include <iostream>
using namespace std;

int main(){
    int matrix[3][3], matrix2[3][3], sum[3][3], transpose[3][3], transpose2[3][3], sumTranspose[3][3];
    cout << "Enter elements of first matrix (3x3): " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> matrix[i][j];
        }
    }
    cout << "Enter elements of second matrix (3x3): " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> matrix2[i][j];
        }
    }

    cout << "First matrix: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Second matrix: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

  
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sum[i][j] = matrix[i][j] + matrix2[i][j];
        }
    }
    cout << "Sum of the two matrices: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

  
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            transpose[i][j] = matrix[j][i];
        }
    }
    cout << "Transpose of the first matrix: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

 
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            transpose2[i][j] = matrix2[j][i];
        }
    }

    cout << "Transpose of the second matrix: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << transpose2[i][j] << " ";
        }
        cout << endl;
    }


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sumTranspose[i][j] = transpose[i][j] + transpose2[i][j];
        }
    }

    cout << "Sum of the two transposed matrices: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << sumTranspose[i][j] << " ";
        }
        cout << endl;
    }

}