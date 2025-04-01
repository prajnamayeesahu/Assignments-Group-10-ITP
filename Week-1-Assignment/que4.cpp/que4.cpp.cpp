#include<iostream>
using namespace std;
int main(){
    int a,rem,bn=0,pow=1,ans=0,anss=0;
    cout<<"enter a decimal number ";
    cin>>a;
    int b=a;
    cout<<"Binary ";
    for(int i=0;a>0;i++){
       rem = a%2;
       a=a/2;
       bn = rem*pow;
       pow=pow*10;
       ans=ans+bn;

    }
    cout<<ans<<endl;
    cout<<"Octal ";
    for(int i=0;b>0;i++){
        rem = b%8;
        b=b/8;
        bn = rem*pow;
        pow=pow*10;
        anss=anss+bn;
 
     }
     cout<<anss;
}