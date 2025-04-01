/*
Write a C++ program to find the largest digit in a number.
*/
#include<iostream>
using namespace std;
int main(){
    int n1,ld=0;
    cout<<"Enter a NO.:"<<endl;
    cin>>n1;
    int n2=n1;
    while(n2>0){
        int y=n2%10;
        if(y>ld){
            ld=y;
        }
        n2=n2/10;
    }
    cout<<"Largest digit is: "<<ld;
    return 0;
}