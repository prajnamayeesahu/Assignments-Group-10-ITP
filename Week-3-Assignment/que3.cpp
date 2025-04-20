#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string input, result = "";
    cout << "Enter a string: ";
    getline(cin, input);
    for (char ch : input) {
        if (isalpha(ch)) {
            result += ch;
        }
    }
    cout << "only alphabets are: " << result << endl;
}
