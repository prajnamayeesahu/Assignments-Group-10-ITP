/*
8. Write a C++ program to check whether a given string is a
palindrome. (without using any built-in reverse function)
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int start = 0;
    int end = 0;
    while (s[end] != '\0') {
        end++;
    }
    end--;  
    int flag = 0;
    while (start < end) {
        if (s[start] != s[end]) {
            flag = 1; 
            break;
        }
        start++;
        end--;
    }
    if (flag == 0) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}