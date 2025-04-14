#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter size of first array ";
    cin>>x;
    int t=x;
    int a[x];
    cout<<"enter elements of the array ";
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    int y;
    cout<<"enter size of second array ";
    cin>>y;
    int b[y];
    cout<<"enter elements of second array ";
    for(int i=0;i<y;i++){
        cin>>b[i];
    }
    int sum[x+y];
    for(int i=0;i<x;i++){
        sum[i]=a[i];
    }
    for(int i=0;i<y;i++){
        sum[x]=b[i];
        x++;
    }
    int rev[t+y];
    cout<<"reverse array is ";
    for(int i=0;i<(t+y);i++){
        rev[i]=sum[t+y-i];
    }
    for(int i=0;i<(t+y);i++){
        cout<<rev[i]<<" ";
    }
}