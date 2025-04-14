// Write a C++ program to remove all characters except alphabets in a string.

#include <iostream>
using namespace std;

int main() {
    string str, result = "";

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            result += ch;
        }
    }

    cout << "String with only alphabets: " << result << endl;

    return 0;
}
