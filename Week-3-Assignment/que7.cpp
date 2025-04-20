#include <iostream>
using namespace std;
int main() {
    char str[100], ch;
    cout << "Enter a string: ";
    cin.getline(str,100);
    cout << "Enter the character to remove: ";
    cin >> ch;
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] != ch) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
    cout << "String after removing '" << ch << "': " << str << endl;
}
