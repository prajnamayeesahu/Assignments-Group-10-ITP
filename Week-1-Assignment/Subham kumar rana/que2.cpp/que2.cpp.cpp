#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"enter the sides of triangle"<<endl;
    cout<<"1st side: ";
    cin>>a;
    cout<<"2nd side: ";
    cin>>b;
    cout<<"3rd side: ";
    cin>>c;
    if(a+b>c && b+c>a && c+a>b){
        cout<<"Triangle can be drawn"<<endl;
    
    if(a==b==c){
        cout<<"it is equilateral triangle";
    }
    else if(a==b || b==c || c==a){
        cout<<"it is a isoscele triangle";
    }
    else{
        cout<<"scalene triangle";
    }
    }
    else{
        cout<<"triangle can't be drawn";
    }
}