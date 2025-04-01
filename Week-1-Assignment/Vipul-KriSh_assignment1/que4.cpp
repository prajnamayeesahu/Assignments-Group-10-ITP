/*
4. Write a C++ program to input a decimal number and convert it into binary and
octal number system using loops.
*/

#include<iostream>
using namespace std;
int bin(int a);
int oct(int a);




int bin(int a){
    int bin=0,place=1;
    while(a>0){
        int rem=a%2;
        bin+=(rem*place);
        a/=2;
        place*=10;
    }
    return bin;
}

int oct(int a){
    int oct=0,place=1;
    while(a>0){
        int rem=a%8;
        oct+=(rem*place);
        a/=8;
        place*=10;
    }
    return oct;
}
    

int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"Binary of the no."<<bin(a)<<endl;
    cout<<"Octal of the no."<<oct(a)<<endl;
    return 0;

}