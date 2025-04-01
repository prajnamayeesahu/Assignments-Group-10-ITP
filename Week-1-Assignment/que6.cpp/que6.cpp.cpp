#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter n ";
    cin>>a;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= a; j++){
            for(int k = 1; k <= i; k++){
                cout<<j;
            }
        }
        cout<<endl;
    }
}