/*
2. Write a C++ program to find the total number of alphabets,
digits and special characters in a string
*/


#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string s;
    int c1 = 0, c2 = 0, c3 = 0;
    cout << "Enter a string : ";
    getline(cin,s);

    for(int i = 0; i < s.length(); i++) {
        char c = s[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            c1++;
        }
        else if (c >= '0' && c <= '9') {
            c2++;
        }
        else {
            c3++;
        }
    }
    cout << "Total no. of alphabets : " << c1 << endl;
    cout << "Total no. of digits : " << c2 << endl;
    cout << "Total no. of special characters : " << c3 << endl;
    return 0;
}