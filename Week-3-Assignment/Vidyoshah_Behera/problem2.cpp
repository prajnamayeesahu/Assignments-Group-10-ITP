/*2. Write a C++ program to find the total number of alphabets,
digits and special characters in a string.*/

#include <iostream>
using namespace std;

int main()
{
    string str;
    int alpha = 0, digit = 0, specialchars = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alpha++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else if (str[i] != ' ')
        {
            specialchars++;
        }
    }
    cout << "Total Alphabets: " << alpha << endl;
    cout << "Total Digits: " << digit << endl;
    cout << "Total Special Characters: " << specialchars << endl;

    return 0;
}