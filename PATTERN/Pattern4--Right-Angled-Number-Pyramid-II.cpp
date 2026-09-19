#include <bits/stdc++.h>
using namespace std;

void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

int main() {
	
	int a;
	cout<<"Enter a number:- "<<endl;
	cin>>a;
	
	pattern4(a);
	
	return 0;

}
