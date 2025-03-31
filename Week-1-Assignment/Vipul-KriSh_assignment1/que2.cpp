/*
2. Write a C++ program to input 3 sides of triangle and a triangle can be drawn
from it or not, if triangle can be drawn then check if it is equilateral, isosceles or
scalene triangle.
*/
#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter Three sides of the triangle:"<<endl;
    cin>>a>>b>>c;
    if(a + b > c || b + c > a || c + a > b){
        cout<<"A Triangle can be formed"<<endl;
        if(a!=b && b!=c){
            cout<<"A scalene triangle will be formed";
        }
        else if(a==b&&a==c){
            cout<<"An Equilateral triangle can be formed";
        }
        else {
            cout<<"An Isosceles triangle can be formed";
        }
    }
    else{
        cout<<"A triangle can not be formed";
    }
    return 0;
    
}