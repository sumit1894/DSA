#include <iostream>
using namespace std;


void pattern7(int n){

    for(int i=1; i<=n; i++){
        for(int s=4; s>=i;s--){
            cout<<" ";
        }
        for(int j=1;j<=(2*i)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
} 
int main(){

    int x;
    cout<<"Enter a Number:- ";
    cin>>x;

    pattern7(x);

    return 0;
}