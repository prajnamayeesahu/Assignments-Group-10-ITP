#include<iostream>
using namespace std;
int main ()
{
    int i;
    cout << "Printing no from 1 to 100:-";
    for(i=1;i<=100;i++)
    {
        if(i%3==0 && i%5==0)
        {
            cout<<"fizzbuss \n";
        }
         else if(i%3==0)
        {
            cout<<"fizz\n";
        }
        else if(i%5==0)
        {
            cout<<"buzz\n";
        }
         else
        {
            cout<<i<<"\n";
        }
    }
    return 0;
}

