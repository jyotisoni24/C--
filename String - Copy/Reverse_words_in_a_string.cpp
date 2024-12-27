#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        string temp="", ans="";
        //Checking blank space
        while(s[s.size()-1]==' ')s.pop_back();
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == ' ' && temp.size()== 0) continue;
            if(s[i] == ' '){
                /*reverse(temp.begin(),temp.end());
                ans+=temp;
                ans+=' ';
                temp = "";
                */
                if(ans.size()==0){ans+=temp;temp="";}
                else{ans = temp+' '+ans;temp = "";}
            }
            else temp+=s[i];
        }
        //reverse(temp.begin(),temp.end());
        //ans+=temp;
        //reverse(ans.begin(),ans.end());
        if(ans.size()!=0)  ans = temp+' ' +ans;
        else ans = temp;
        return ans;
    }
};