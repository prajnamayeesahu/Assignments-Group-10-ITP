#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter sizes of array 1 ";
    cin>>a;
    int arr1[a];
    cout<<"enter elements of 1st array ";
    for(int i=0;i<a;i++){
        cin>>arr1[i];
    }
    cout<<"enter size of array 2 ";
    cin>>b;
    int arr2[b];
    int t=a+b;
    int arr3[t];
    int rev_arr[t];
    cout<<"enter elements of 2nd array ";
    for(int u=0;u<b;u++){
        cin>>arr2[u];
    }
    for(int i=0;i<(a);i++){
        arr3[i]=arr1[i];
    }
    for(int i=a;i<b;i++){
        arr3[a+i]=arr2[i];
    }
    for(int i=a+b-1;i>=0;i--){
        rev_arr[i]=arr3[a+b-1+i];
    }
    for(int i=0;i<a+b;i++){
        cout<<rev_arr[i];
    }
}