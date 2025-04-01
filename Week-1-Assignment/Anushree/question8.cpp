#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) { // Loop through rows
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Print spaces
        int spaces = (n - i) * 2;
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Print decreasing numbers
        for (int j = i; j >= 1; j--) 
        {
            // Only print for rows with spaces
                cout << j;
        
        }
        cout << endl; // Move to the next line
    }
}

int main()
{
    int n=4;
    
    printPattern(n);

    return 0;
}