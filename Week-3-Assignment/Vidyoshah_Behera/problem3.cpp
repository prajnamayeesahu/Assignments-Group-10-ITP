/*3. Write a C++ program to remove all characters except alphabets
in a string.*/
#include <iostream>
using namespace std;

int main()
{
    string str, result = "";

    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Original String :" << str << endl;

    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            result += str[i];
        }
    }
    cout << "String After Removing All Characters:" << result << endl;

    return 0;
}