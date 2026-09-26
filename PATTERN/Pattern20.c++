#include <iostream>
using namespace std;


void pattern3(int n){
    int e=n;
    int temp=2;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }

        for(int j=1;j<=(2*e)-1; j++){
            cout<<" ";
        }
        for(int j=1; j<=i;j++){
            cout<<"*";
        }



        e--;
        cout<<endl;
    }
    for(int i=n; i>=1; i--){
        for(int j=2; j<=i;j++){
            cout<<"*";
        }

        for(int j=1;j<=(2*temp)-1; j++){
            cout<<" ";
        }
        for(int j=2; j<=i;j++){
            cout<<"*";
        }



        e--;
        temp++;
        cout<<endl;
    }
}

int main(){
    
    int x;
    cout<<"enter a number:- "<<endl;
    cin >>x;
    
    pattern3(x);
    
    return 0;
}