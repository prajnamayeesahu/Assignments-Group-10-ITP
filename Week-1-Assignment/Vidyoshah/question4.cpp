/*Write a C++ program to input a decimal number and convert it into binary and
 octal number system using loops*/
 #include <iostream>
using namespace std;
int DecimaltoBinary(int a){
    int binary=0, digit=1;
    while(a>0){ 
        binary= binary +((a%2)*digit);
        a/=2;
        digit*=10;

    }
    return binary;
}
    int DecimaltoOctal(int a){
        int octal=0, digit=1;
        while(a>0){
            octal= octal +((a%8)*digit);
            a/=8;
            digit*=10;
        }
    return octal;
}
int main(){
    int a,bin,oct; 
  cout<< "Enter a Decimal Number: ";
    cin>>a;
oct= DecimaltoOctal(a);
bin= DecimaltoBinary(a);
cout<<"Binary Number:"<< bin <<endl;
cout<<"Octal Number:"<< oct <<endl;
return 0;
}