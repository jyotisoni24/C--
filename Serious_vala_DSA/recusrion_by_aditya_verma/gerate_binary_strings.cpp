#include <bits/stdc++.h>
using namespace std;    
class Solution {
  public:
    void solve(int n , vector<string> &res , string temp){
        if(temp.length() == n){ //base condition , if temp length == n then its a string push into res and return
            res.push_back(temp);
            return;
        }
        solve(n , res , temp + '0'); //here if the temp length is not n then we add 0 in temp and call solve function again
        if(temp.empty() || temp.back() != 1) solve(n , res , temp + '1'); // after it , if temp is empty or the last character is not 1 -> because if its 1 , it means we already added 1 previously , so to avoid consecutive 1s we check this condition , if true we add 1 to temp and call solve function again
    }
    vector<string> binstr(int n) {
        vector<string> res;
        solve(n , res , "");
        return res;
    }
};
int main(){
    int n;
    cin >> n;
    Solution s;
    vector<string> result = s.binstr(n);
    for(auto it : result){
        cout << it << " ";
    }
    return 0;
}