#include <iostream>
using namespace std;

void pattern11(int n)
{
    int temp = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= (2 * temp) - 1; k++)
        {
            cout << " ";
        }
        for (int l = i; l >= 1; l--)
        {
            cout << l;
        }

        temp--;
        cout << endl;
    }
}

int main()
{
    int x;
    cout << "Enter a Number:- ";
    cin >> x;

    pattern11(x);
    return 0;
}
