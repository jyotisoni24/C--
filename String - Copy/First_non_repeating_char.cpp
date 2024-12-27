#include<bits/stdc++.h>
using namespace std;
int First_non_repeating_char(string &s){
    vector<int>v(26,-1);//Jyoti
    for(int i = 0 ; i < s.size();i++){
        if(v[s[i] - 'a'] == -1) v[s[i] - 'a'] = i;//Agar first time hi aya hai character to i kar diya
        else  v[s[i]-'a'] = -2; // Agar pehle  bhi aa rakha hai tabi -2 kiya hai
    }
    int res = INT_MAX;
    for(int i = 0 ; i < 26; i ++){
        if(v[i] >= 0) res = min(res,v[i]);// V[i] >= 0 means vo charcter ek hi baar hai.. non repeating aur agar aage badhe to right most milega thatswhy min karenge
    }
    return (res == INT_MAX) ? -1 : res;//It will return the index at which the first non repeating character is present
}
int main(){
    string s;
    cin>>s;
    cout<<First_non_repeating_char(s)<<endl;
}