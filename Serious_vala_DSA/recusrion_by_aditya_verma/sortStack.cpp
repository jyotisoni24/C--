#include <bits/stdc++.h>
using namespace std;    
class Solution {
  public:
    void Insert(stack<int> &st , int temp){
        if(st.empty() || st.top() <= temp){ //<= for descending order
            st.push(temp);
            return;
        }
        int val = st.top();
        st.pop();
        Insert(st , temp);
        st.push(val);
    }
    void sortStack(stack<int> &st) {
        if(st.empty()) return;
        int temp = st.top();
        st.pop();
        sortStack(st);
        Insert(st, temp);
    }
};
int main() {
    stack<int> st;
    st.push(34);
    st.push(3);
    st.push(31);
    st.push(98);
    st.push(92);
    st.push(23);
    
    Solution ob;
    ob.sortStack(st);
    
    cout << "Sorted Stack: \n";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
