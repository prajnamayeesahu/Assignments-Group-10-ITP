/* Write a C++ program to find the largest digit in a number*/
#include <iostream>
using namespace std;
int main()
{
    long a;int greatest,largest=0;
    cout<< "Enter a number:";
    cin>> a;
    while(a>0){
greatest= a%10; 
if(greatest>largest){
largest=greatest;
}
a/=10;
    }
cout<< "Largest Digit :" <<largest << endl;
return 0;
}

