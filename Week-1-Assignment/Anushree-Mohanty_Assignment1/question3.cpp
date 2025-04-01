#include<iostream>
using namespace std;
int main ()
{
    int a,temp=0, digit;
    cout<<"Enter a number:-";
    cin>>a;
    while (a>0)
    {
        digit= a%10;
        if(digit>temp)
        {
            temp= digit;
        }
        a=a/10;
    }
    cout<<"the largest digit in a number is:-"<<temp;
    return 0;
}