#include <iostream>
using namespace std;

void pattern15(char c){

    for(char i=c; i>='A'; i--){
        for(char j='A'; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){

    char c;
    cout<<"Enter a CAPITAL char:- ";
    cin>>c;

    pattern15(c);
    return 0;
}