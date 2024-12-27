#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int res = INT_MAX;
    vector<int> v(26,-1);
    for(int i = 0 ; i < s.size(); i++){
        if(v[s[i] - 'a'] == -1) v[s[i] - 'a'] = i;
        else res = min(res,v[s[i]-'a']);
    }
    cout<<res<<endl;
}