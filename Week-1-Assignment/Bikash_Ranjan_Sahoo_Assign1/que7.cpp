

#include <iostream>
using namespace std;
int main (){
    int n, i, j;
    cout << "Enter a number: ";
    cin >> n;
    int x = 1;
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= n; j++) {
            cout << x;
            if (j != n) 
                cout << "*";
            x++;
        }
        cout << endl;
    }
}









