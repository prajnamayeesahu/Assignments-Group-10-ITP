/* Write a C++ program to input 3 sides of triangle and a triangle can be drawn
from it or not, if triangle can be drawn then check if it is equilateral, isosceles or
scalene triangle */
#include <iostream>
using namespace std;

int main(){
    float a, b, c;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "A triangle can be formed." << endl;

        if (a == b && b == c) {
            cout << "The triangle is equilateral." << endl;
        } else if (a == b || b == c || a == c) {
            cout << "The triangle is isosceles." << endl;
        } else {
            cout << "The triangle is scalene." << endl;
        }
    } else {
        cout << "A triangle cannot be formed." << endl;
    }

    return 0;
}