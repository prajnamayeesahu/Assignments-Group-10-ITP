/*Write a C++ program to find the total number of alphabets,
digits and special characters in a string.*/

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int alphabets = 0, digits = 0, specialChars = 0;

    for (char ch : str) {
        if (isalpha(ch)) {
            alphabets++;
        } else if (isdigit(ch)) {
            digits++;
        } else if (!isspace(ch)) { // Check for special characters
            specialChars++;
        }
    }

    cout << "Total alphabets: " << alphabets << endl;
    cout << "Total digits: " << digits << endl;
    cout << "Total special characters: " << specialChars << endl;

    return 0;
}