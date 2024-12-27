#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i <= n; i++){
        int x = n-i;
        for(int j = 0 ; j < i ; j++){
            cout<<char(x+65)<<" ";
            x++;                 
        }
        cout<<endl;
    }
}