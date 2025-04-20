/*Write a C++ program to convert a string to lowercase without using inbuilt functions.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string lowerStr;
    for (char ch : str) {
        if (ch >= 'A' && ch <= 'Z') {
            lowerStr += (ch + 32); 
        } else {
            lowerStr += ch; 
        }
    }

    cout << "String in lowercase: " << lowerStr << endl;

    return 0;
}