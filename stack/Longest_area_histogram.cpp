#include <bits/stdc++.h>
using namespace std;
int func(vector<int> &arr){
    stack<int> st;
    int maxArea =0;
    for(int i = 0 ; i < arr.size() ; i++){
        while(!st.empty() && arr[st.top()] > arr[i]){
            element = st.top();
        }
    }
}