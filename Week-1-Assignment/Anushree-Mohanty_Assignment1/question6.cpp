#include<iostream>
using namespace std;
 void printPattern(int n) {
    // First row
    for (int i = 1; i <= n; i++) {
      cout << i;
    }
    cout << endl;
    
    // Second row
    for (int i = 1; i <= n; i++) {
      cout << i << i;
    }
    cout << endl;
    
    // Third row
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
          cout << i;
      }
    }
    cout << endl;
}

int main()
{
    int n=3;
    printPattern(n);
    return 0;

}

