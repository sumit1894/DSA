#include <iostream>>
using namespace std;


void pattern5(int n){

    for(int i=n; i>=1; i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
} 
int main(){

    int x;
    cout<<"Enter a Number:- ";
    cin>>x;

    pattern5(x);

    return 0;
}