#include <iostream>
using namespace std;

int main() {
    string str;
    char ch;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter the character to remove: ";
    cin >> ch;

    int i = 0;
    while (i < str.length()) {
        if (str[i] == ch) {
            str.erase(i, 1);
        } else {
            i++;
        }
    }

    cout << "String after removal: " << str << endl;

    return 0;
}
