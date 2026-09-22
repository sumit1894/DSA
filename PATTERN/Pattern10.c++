#include <iostream>
using namespace std;


void pattern9(int n){

for(int i=1;i<=n;i++){
    for(int j=1; j<=i;j++){
        cout<<"* ";
    }
    cout<<"\n";
}    
for(int i=1;i<=n;i++){
    for(int j=i; j<=n;j++){
        cout<<"* ";
    }
    cout<<"\n";
}    
    
} 
int main(){

    int x;
    cout<<"Enter a Number:- ";
    cin>>x;

    pattern9(x);

    return 0;
}