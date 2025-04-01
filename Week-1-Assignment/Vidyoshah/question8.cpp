/*Write a C++ program to print the pattern
sample output: for n=4
1      1
12    21
123  321
12344321
*/
#include <iostream>
using namespace std;
int main()
{
    int  i, j,k,l,n;
    cout << "Enter n:";
    cin >> n;
    for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout<< j;
    }
    for(k=1;k<=2*(n-i);k++){
        cout<< " ";
    }
    for(l=i;l>0;l--){
        cout<< l;
    }
    cout<< endl;
     }
     return 0;
    }