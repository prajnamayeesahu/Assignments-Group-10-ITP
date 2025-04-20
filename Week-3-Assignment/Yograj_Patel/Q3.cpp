/*
3. Write a C++ program to remove all characters except alphabets
in a string
*/

#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string s,alpha_s;
    cout << "Enter a string : ";
    cin >> s;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            alpha_s += c; 
        }
    }
    cout << "The string with only alphabets : " << alpha_s;
    return 0;
}
