
/*Write a C++ program to check if a Number is Perfect square using loops.*/

#include<iostream>
using namespace std;
#include<cmath>

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int root = sqrt(n);
    if (root * root == n) {
        cout << n << " is a perfect square." << endl;
    } else {
        cout << n << " is not a perfect square." << endl;
    }
    return 0;
}