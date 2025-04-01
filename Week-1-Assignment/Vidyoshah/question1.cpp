/*Write a program to print the numbers from 1 to 100, but
replace multiples of 3 with "Fizz" and multiples of 5 with "Buzz" and if divisible
 by both print “FizzBuzz”*/
#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "FizzBuzz" << "\n";
        }
        else if (i % 3 == 0)
        {
            cout << "Fizz" << "\n";
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz" << "\n";
        }
        else
            cout << i << "\n";
    }
    return 0;
}