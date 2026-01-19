#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void insertatBottom(stack<int>&st , int temp){
        if(st.size() == 0){ //base case
            st.push(temp);
            return;
        }
        int val = st.top();
        st.pop();
        insertatBottom(st , temp);
        st.push(val);
    }
    void reverseStack(stack<int> &st) {
        // code here
        if(st.size() == 0){
            return;
        }
        int temp = st.top();
        st.pop();
        reverseStack(st);
        insertatBottom(st , temp);
    }
};
int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    
    Solution ob;
    ob.reverseStack(st);
    
    cout << "Reversed Stack: \n";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}