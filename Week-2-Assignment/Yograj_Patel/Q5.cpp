/*
5. Write a C++ program to find the second smallest elements in a
given array of integers(all elements of array distinct).
*/

#include <iostream>
#include <climits>
using namespace std;
int main()
{   
    int n;
    cout << "Enter size of arry : ";
    cin >> n;
    int a[n],i;
    cout << "Enter array elements : ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    } 

    int min = INT_MAX, sec_min = INT_MAX;

    for (i = 0; i < n; i++) {
        if (a[i]  < min) {
            sec_min = min;
            min = a[i];
        }
        else if (a[i] < sec_min && a[i] != min) {
            sec_min = a[i];
        } 
    } 
    cout << "Second smallest element : " << sec_min << endl;
    return 0;
}
