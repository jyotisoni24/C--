#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int spaces1 = 2 * (n - 1);
    int spaces2 = 0;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= spaces2; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
        spaces2 += 2;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= spaces1; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
        spaces1 -= 2;
    }
}