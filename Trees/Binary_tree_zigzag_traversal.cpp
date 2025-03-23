class Solution {
    public:
        vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            vector<vector<int>> ans;
            if (root == NULL)
                return {};
            queue<TreeNode*> q;
            q.push(root);
            int cnt = 0;
            while (!q.empty()) {
                int si = q.size();
                vector<int> temp(si);// we created an vector of size of the queue
                for (int i = 0; i < si; i++) {
                    TreeNode* x = q.front();
                    q.pop();
                    if (x->left)
                        q.push(x->left);
                    if (x->right)
                        q.push(x->right);
                    if (cnt % 2 != 0) { // if cnt is odd it means we are at odd level .. so we insert the elements backward
                        temp[si - i - 1] = x->val;
                    } else {
                        temp[i] = x->val;// here we insert it in forward direction
                    }
                }
                ans.push_back(temp);
                cnt++;// going to next level
            }
            return ans;
        }
    };