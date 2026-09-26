#include <iostream>
using namespace std;

void pattern19(int n){
    int e=n;
    for(int i=1; i<=n; i++){
        for(int j=e; j>=1;j--){
            cout<<"*";
        }
        for(int k=1; k<=(2*i)-1;k++){
            cout<<" ";
        }
        for(int j=e; j>=1;j--){
            cout<<"*";
        }
        e--;
        cout<<endl;
    }
    int t=n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        for(int k=1; k<=(2*t)-1; k++){
            cout<<" ";
        }
        for(int j=1; j<=i;j++){
            cout<<"*";
        }


        t--;
        cout<<endl;
    }
}

int main(){
    
    int n;
    cout << "Enter a number:- ";
    cin >> n;

    pattern19(n);

    return 0;
}