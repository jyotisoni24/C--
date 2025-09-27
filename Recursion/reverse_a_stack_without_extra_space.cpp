class Solution {
    public:
        void insertAtBottom(stack<int> &st, int val) {
            if (st.empty()) {
                st.push(val);
                return;
            }
            int top = st.top();
            st.pop();
            insertAtBottom(st, val);
            st.push(top);
        }
    
        void Reverse(stack<int> &st) {
            if (st.empty()) return;
            int val = st.top();
            st.pop();
            Reverse(st);
            insertAtBottom(st, val);
        }
    };

//this is the code for recursion without extra space , isme what we did is hum value ke sath khela... 
//pehle stack ke elements ko call kar karke khali kar liya , phir neeche se insert kiya., last vala insert kar diya  using insertat bottom 
//phir stack empty the to return ho gay ainsert hoke
//phir 5 tha tophit insert ko call gayi usne pehle 4 ko pop kiya store karke phir dobara same function call kiya
//isse 5 bottom pe chala gaya and 4 ko uske upar insert kar diya...
// similarly 7 bhi aise hi insert hua..