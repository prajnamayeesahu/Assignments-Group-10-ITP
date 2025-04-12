/*Take two array as input, merge them and print it in reverse order
using loop*/

#include <iostream>
using namespace std;   

int main(){
    int n1, n2;
    cout << "Enter the size of first array: ";
    cin >> n1;
    cout << "Enter the size of second array: ";
    cin >> n2;

    int arr1[n1], arr2[n2], merge[n1+n2];

    cout << "Enter elements of first array: ";

    for(int i = 0; i < n1; i++)
        {
            cin >> arr1[i];
            merge[i] = arr1[i];
    }

    cout << "Enter elements of second array: ";

    for(int i = 0; i < n2; i++)
        {
            cin >> arr2[i];
            merge[n1+i] = arr2[i];
    }

    cout << "Merged array in reverse order: ";
    for(int i = n1+n2-1; i >= 0; i--)
        {
             cout << merge[i] << "\t";
    }
    
    return 0;
}