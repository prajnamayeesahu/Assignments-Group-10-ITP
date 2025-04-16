#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    int alphabets = 0, digits = 0, specialChars = 0;

    cout << "Enter a string: ";
    getline(cin, str); 

    for (char ch : str) {
        if (isalpha(ch))
            alphabets++;
        else if (isdigit(ch))
            digits++;
        else if (!isspace(ch))
            specialChars++;
    }

    cout << "Total Alphabets: " << alphabets << endl;
    cout << "Total Digits: " << digits << endl;
    cout << "Total Special Characters: " << specialChars << endl;

    return 0;
}
