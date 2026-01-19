#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(string s , string op , vector<string> &res){
        if(s.length() == 0){
            res.push_back(op);
            return;
        }
        if(isalpha(s[0])){ //checlking if character is alphabet
            string op1 = op;
            string op2 = op;
            op1.push_back(tolower(s[0])); //making lowercase
            op2.push_back(toupper(s[0])); //making uppercase
            s.erase(s.begin()+0); //removing first character
            solve(s , op1 , res); //calling recursion for both cases
            solve(s , op2 , res);
        }
        else{
            op.push_back(s[0]); //if character is digit just push it to output
            s.erase(s.begin()+0);
            solve(s , op , res); //call recursion
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        string op = "";
        solve(s , op , res);
        return res;
    }
};
int main() {
    string s = "a1b2";
    Solution ob;
    vector<string> result = ob.letterCasePermutation(s);
    for (const string &str : result) {
        cout << str << endl;
    }
    return 0;
}