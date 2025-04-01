/*7. Write a C++ program to print the pattern
sample output:
for n=3                  sample output: for n=4
1*2*3                                   1*2*3*4
4*5*6                                   5*6*7*8
7*8*9                                   9*10*11*12
*/   
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no."<<endl;
    cin>>n;
    
    for(int j=1;j<=3*n;j++){
        cout<<j;
        if(j%n==0){
            cout<<"\n";
        }
        else{
            cout<<"*";
        }
            
    }
    return 0;
}