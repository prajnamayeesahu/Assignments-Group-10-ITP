#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, result = "";
    char ch;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Enter the character to remove: ";
    cin >> ch;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ch)
        {
            result += str[i];
        }
    }
    cout << "String after removing '" << ch << "': " << result << endl;

    return 0;
}