#include <iostream>
using namespace std;

void pattern18(char c){
    int n=c;
    for(char i=n; i>='A'; i--){
        for(char j=i; j<=n; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    
    char c;
    cout << "Enter a CAPITAL char:- ";
    cin >> c;

    pattern18(c);

    return 0;
}