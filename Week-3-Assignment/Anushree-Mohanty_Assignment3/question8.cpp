// Write a C++ program to check whether a given string is a
//  palindrome. (without using any built-in reverse function)

#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length() / 2; i++) {
        if (str[i] != str[str.length() - 1 - i]) {
            cout << "Not Palindrome" << endl;
            return 0;
        }
    }

    cout << "Palindrome" << endl;
    return 0;
}
