
/* Write a C++ program to input a decimal number and convert it into binary and
octal number system using loops.*/

#include <iostream>
using namespace std;
#include <cmath>

void binary(int n);
void octal(int n);

 int main(){
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
        
        binary(n);
        octal(n);

    return 0;
 }

 void binary(int n) {
    int i = 1;
    int binary = 0;
    while (n > 0) {
        
        int remainder = n % 2;
        binary += remainder * i;
        n /= 2;
        i *= 10; 
    }

    cout << "Binary: " << binary << endl;
 }

 void octal(int n) {
    int j = 1;
    int octal = 0;
    while (n > 0) {
        
        int remainder = n % 8;
        octal += remainder * j;
        n /= 8;
        j *= 10; 
    }

    cout << "Octal: " << octal << endl;
 }


 