/*Write a C++ program to input 3 sides of triangle and a triangle can be drawn
 from it or not, if triangle can be drawn then check if it is equilateral, isosceles or
 scalene triangle.*/
#include <iostream>
using namespace std;
int main()
{
    int i, a, b, c;
    for (i = 1; i <= 3; i++)
    {
        cout << "Enter" << i << "side =";
        if (i == 1)
            cin >> a;
        else if (i == 2)
            cin >> b;
        else if (i == 3)
            cin >> c;
    }
    /*properties of triangle: p1-if sum of two sides is greater than the third side then triangle can be drawn
    p2- if any of the side  is equal to zero then triangle cannot be drawn*/
    if (a == 0 || b == 0 || c == 0)
    {
        cout << "Triangle cannot be drawn" << endl;
    }
    else
    {
        cout << "Triangle can be drawn" << endl;
        if (a == b && b == c)
        {
            cout << "The Triangle is Equilateral" << endl;
        }
        else if (a == b || b == c)
        {
            cout << "The Triangle is Isosceles Triangle" << endl;
        }
        else
        {
            cout << "The Triangle is Scalene" << endl;
        }
    }
    return 0;
}
