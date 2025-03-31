/*
5. Write a C++ program to check if a Number is Perfect square using loops.
*/
#include<iostream>
using namespace std;
int pfsq(int a){
    for(int i=0;i<a;i++){
        if(i*i==a){
            return true;
        }
    }   
}
int main(){
    int a;
    cout<<"Enter a no."<<endl;
    cin>>a;
    if (pfsq(a)==true){
        cout<<"It is a Perfect Square";
    }
    else{
        cout<<"Not a Perfect Square";
    }
    return 0;
}