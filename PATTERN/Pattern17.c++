#include <iostream>
using namespace std;

void pattern17(char c)
{
    char e=c;
    for (char i = 'A'; i <= c; i++)
    {
        for(char s=e; s>'A'; s--){
            cout<<" ";
        }
        e--;
        for (char j = 'A'; j <= i; j++)
        {
            cout << j;
        }

        for(char k=i-1;k>='A';k--){
            cout<<k;
        }



        cout << endl;
    }
}

int main()
{
    char c;
    cout << "Enter a CAPITAL char:- ";
    cin >> c;

    pattern17(c);

    return 0;
}