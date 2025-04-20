/*Write a C++ program to remove all characters except alphabets
in a string.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    // Remove all characters except alphabets
    string result;
    for (char ch : str) {
        if (isalpha(ch)) {
            result += ch;
        }
    }

    cout << "String after removing non-alphabet characters: " << result << endl;

    return 0;
}