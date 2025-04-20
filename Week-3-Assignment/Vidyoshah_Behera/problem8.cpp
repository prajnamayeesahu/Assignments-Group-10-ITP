/*8. Write a C++ program to check whether a given string is a
palindrome. (without using any built-in reverse function)*/

#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int Palindrome = 1;
    int st = 0, end = str.length() - 1;

    while (st < end)
    {
        if (str[st] != str[end])
        {
            Palindrome = 0;
            break;
        }
        st++;
        end--;
    }

    if (Palindrome == 1)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}