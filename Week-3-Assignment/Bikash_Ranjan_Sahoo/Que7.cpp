/*Write a C++ program to remove all occurrences of a given character from a string.*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    char charToRemove;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter the character to remove: ";
    cin >> charToRemove;

    // Remove all occurrences of charToRemove from str
    str.erase(remove(str.begin(), str.end(), charToRemove), str.end());

    cout << "String after removing '" << charToRemove << "': " << str << endl;

    return 0;
}