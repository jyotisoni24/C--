#include <bits/stdc++.h>
using namespace std;
vector findPrevSmaller(vector<int> &v){
    stack<int> st;//take a stack 
    vector<int> pse(n);//ans vector
    for(int i = 0 ; i < v.size() ; i++){
        while(!st.empty() && st.top() >= v[i]){ // agar stack empty nhi hai aur top element arr ke element se bada hai to 
            st.pop();//element ko pop kar denge
        }
        pse[i] = st.empty() ? -1 : st.top();// agar ans vector mein kuch nhi hai to -1 store kar denge varna top element agar empty nhi hai to
        st.push(v[i]);//then uss element ko push karna
    }
    return pse;
}
