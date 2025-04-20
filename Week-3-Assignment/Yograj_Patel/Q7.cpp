/* 
7. Write a C++ program to remove all occurrences of a given
character from a string.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    char c;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Enter the character to remove: ";
    cin >> c;
    string result = "";
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            result += s[i];
        }
    }
    cout << "String after removing '" << c << "': " << result << endl;
    return 0;
}
