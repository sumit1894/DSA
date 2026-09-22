#include <iostream>
using namespace std;


void pattern9(int n){

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout<<" ";
        }
        for(int j=1; j<=(i*2)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1; i--){
        for(int j=n;j>=i;j--){
            cout<<" ";
        }
        for( int k=1; k<=(i*2)-1; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    
} 
int main(){

    int x;
    cout<<"Enter a Number:- ";
    cin>>x;

    pattern9(x);

    return 0;
}