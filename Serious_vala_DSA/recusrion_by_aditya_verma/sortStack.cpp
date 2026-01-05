class Solution {
  public:
    void Insert(stack<int> &st , int temp){
        if(st.empty() || st.top() <= temp){
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
