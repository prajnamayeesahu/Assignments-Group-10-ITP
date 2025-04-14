#include<iostream>
using namespace std;
int main(){
    int arr[4]={3,4,1,6};
    cout<<"original array is ";
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    int cpy[4];
    for(int i=0;i<4;i++){
        cpy[i]=arr[i];
    }
    cout<<endl<<"copied array is ";
    for(int i=0;i<4;i++){
        cout<<cpy[i]<<" ";
    }
}