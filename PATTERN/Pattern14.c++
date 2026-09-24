#include <iostream>
using namespace std;

void pattern14(char n)
{
    for (char i = 'A'; i <= n; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{

    char x;
    cout << "Enter a character:- ";
    cin >> x;

    pattern14(x);
}