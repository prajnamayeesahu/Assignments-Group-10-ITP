/*
6. Write a C++ program to convert a string to lowercase without
using inbuilt functions.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string  : ";
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }    
    cout << "String of lower case : " << s;
    return 0;
}
