#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<vector<int>> levelOrder(TreeNode* root) {
            vector<vector<int>> ans;
            if(root == NULL) return {};
            queue<TreeNode*> q;
            q.push(root);
            q.push(NULL);
            while(!q.empty()){
                vector<int> temp;//dummy array
                while(q.front() != NULL){
                    temp.push_back(q.front() -> val);//first we push the value of front element
                    TreeNode* ele = q.front();//store its value
                    q.pop();//then pop it out
                    if(ele -> left ) q.push(ele-> left);//if left and right elements push in the queue
                    if(ele -> right ) q.push(ele -> right);
                }
                q.pop();//after one level pop the front element
                if (!q.empty()) q.push(NULL);//add null in the queue if not empty
                ans.push_back(temp);
            }
            return ans;
        }
    };