#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string t = s; // Initialize t with the same size and content as s
    int i = 0, j = s.size() - 1;
    while (i < s.size() && j > 0)
    {
        if (t[i] == '.' && (t[i + 1] == '#' || t[j - 1] == '#'))
        {
            t[i] = 'o';
            t[j] = 'o';
        }
        i++;
        j--;
    }
    cout << t;
    return 0;
}