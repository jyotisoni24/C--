#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j <= i ; j++){
    //         cout<<char(j+65);
    //     }
    //     cout<<endl;
    // }
    // for(int i = n ; i >= 0 ; i--){
    //     for(int j = i ; j >= 0 ; j--){
    //         cout<<char(j+65);
    //     }
    //     cout<<endl;
    // }
    // for(int i = n ; i >= 0 ; i--){
    //     for(int j = 0 ; j <= i ; j++){
    //         cout<<char(j+65);
    //     }
    //     cout<<endl;
    // }
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j <= i ; j++){
    //         cout<<char(i+65);
    //     }
    //     cout<<endl;
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << char(j + 65);
        }
        for (int j = i-1; j >= 0; j--)
        {
            cout << char(j + 65);
        }
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}