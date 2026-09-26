#include <iostream>

using namespace std;

void pattern22(int x)
{
    int temp=x+1;
    for (int i = x; i >= 1; i--)
    {

        for (int j = x; j > i; j--)
        {
            cout << j;
        }

        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << i;
        }

        for (int j = temp; j <=x; j++)
        {
            cout << j;
        }
        temp--;
        cout << endl;
    }
    for(int i=2; i<=x; i++){
        int t=x;


        for(int k=i; k<x; k++ ){
            cout<<t;
            t--;
        }

        for(int j=1; j<=(2*i)-1; j++){
            cout<<i;
        }
        for(int k=i; k<x; k++ ){
            cout<<k+1;
        }
        cout<<endl;

    }
}

int main()
{

    int x;
    cout << " Enter a number:- ";
    cin >> x;

    pattern22(x);

    return 0;
}