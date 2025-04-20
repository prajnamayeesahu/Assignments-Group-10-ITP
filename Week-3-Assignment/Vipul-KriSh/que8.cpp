#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, reversedStr = "";
    cout << "Enter a string: ";
    cin >> str;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        reversedStr += str[i];
    }
    if (str.compare(reversedStr) == 0)
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}