#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int ctr1 = 0, ctr2 = 0, ctr3 = 0;
    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str)
    {
        if (isalpha(ch))
        {
            ctr1++;
        }
        else if (isdigit(ch))
        {
            ctr2++;
        }
        else
        {
            ctr3++;
        }
    }

    cout << "Total Alphabets: " << ctr1 << endl;
    cout << "Total Digits: " << ctr2 << endl;
    cout << "Total special characters: " << ctr3 << endl;
    return 0;
}