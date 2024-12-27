#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> prefix(n);
    int sum = v[0];
    prefix[0] = v[0];
    for(int i = 1 ; i < n ; i++){
        prefix[i] = prefix[i-1] + v[i];
    }
    for(int i = 0 ; i < n ; i++){
        if(v[0] != 0) cout<<prefix[v[i]] - prefix[v[0] - 1];
        else cout<<prefix[v[i]];
    }
}