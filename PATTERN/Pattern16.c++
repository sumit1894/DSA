#include <iostream>
using namespace std;


void pattern16(char c){
    for(char i='A'; i<=c; i++){
        for(char j='A'; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }
}

int main()
{
    char c;
    cout << "Enter a CAPITAL char:- ";
    cin >> c;

    pattern16(c);

    return 0;
}