#include<iostream>
using namespace std;
int main()
{
  int a=5,b=6,c=7;
  if(a+b>c && b+c>a && a+c>b)
  {
    cout<<"Triangle can be made \n";
  }

  if(a==b && b==c && c==a)
  {
    cout<<"The triangle is equilateral";
  }
  else if(a==b || b==c || a==c)
  {
    cout<< "The traingle is isoceles";
  }
else
{
    cout<<"The triangle is scalene";
}
  return 0;
}

