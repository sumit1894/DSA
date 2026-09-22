#include <iostream>
using namespace std;


void pattern8(int n){

    for(int i=n; i>=1; i--){
        for(int s=i;s<=n;s++){
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

    pattern8(x);

    return 0;
}