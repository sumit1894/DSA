#include <iostream>
using namespace std;


void pattern13(int n){
    int count=1;
    for(int i=1; i<=n;i++){
        for(int j=1; j<=i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}

int main(){
    int x;
    cout << "Enter a Number:- ";
    cin >> x;

    pattern13(x);
    return 0;
}