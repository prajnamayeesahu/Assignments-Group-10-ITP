/*Find the sum of digits of a number using recursion */
#include <iostream>
using namespace std;
int Sum_digits(int x){
    if(x==0){
    return 0;
}
return (x%10) + Sum_digits(x/10);
}
    int main() {
int x,result;
cout<< "Enter a number:";
cin>> x;
result=Sum_digits(x);
cout<< "Sum of digits of the number:"<< result;


    return 0;
}