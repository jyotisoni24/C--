#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, L, R;
    cin >> N >> L >> R;
    string s;
    cin >> s;
    L--;
    R--;

    for (int i = L; i <= R; i++)
    {
        if (s[i] != '0')
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}