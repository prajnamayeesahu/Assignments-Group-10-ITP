#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], sum[3][3], transposeA[3][3], transposeB[3][3], transposedSum[3][3];

    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }

    cout << "Sum of Matrix A and B:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transposeA[j][i] = A[i][j];
            transposeB[j][i] = B[i][j];
        }
    }

    cout << "Transpose of Matrix A:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << transposeA[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose of Matrix B:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << transposeB[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Sum of Transposed Matrices A and B:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transposedSum[i][j] = transposeA[i][j] + transposeB[i][j];
            cout << transposedSum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
