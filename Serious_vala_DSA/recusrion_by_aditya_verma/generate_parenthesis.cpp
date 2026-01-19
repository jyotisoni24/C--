#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(vector<string> &res , int open , int close , string temp){
        if(open == 0 && close == 0){ //base case    
            res.push_back(temp); 
            return;
        }
        if(open > 0){ //if we have open brackets remaining
            string op1 = temp;
            op1.push_back('(');
            solve(res , open - 1, close, op1);
        }
        if(close > open){ //if we have close brackets remaining and more close than open
            string op2 = temp;
            op2.push_back(')');
            solve(res , open , close - 1 , op2); //calling recursion
        }
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        int open = n;
        int close = n; //both open and close brackets are n initially
        solve(res , open , close , ""); //calling recursion
        return res;
    }
};
int main() {
    int n = 3;
    Solution ob;
    vector<string> result = ob.generateParenthesis(n);
    for (const string &str : result) {
        cout << str << endl;
    }
    return 0;
}