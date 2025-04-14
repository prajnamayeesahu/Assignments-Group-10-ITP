#include<iostream>
using namespace std;
int main(){
    int a,largest_digit=0,l;
    cout<<"enter a number: ";
    cin>>a;
    for(int i=0;i<100;i++){
        l = a % 10;
    a=a/10;
    if(l>largest_digit){
        largest_digit=l;
    }  
      }
      cout<<"largest digit is ";
      cout<<largest_digit;
}