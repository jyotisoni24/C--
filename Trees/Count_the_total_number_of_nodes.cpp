class Solution {
    public:
        int countNodes(TreeNode* root) {
            queue<TreeNode*> q;
            if(root == NULL) return 0;
            q.push(root);
            int cnt = 0;
            while(!q.empty()){
               for(int i = 0; i < q.size() ; i++){
                    TreeNode *x = q.front();
                    q.pop();
                    cnt++;
                    if(x-> left != NULL) q.push(x -> left);
                    if(x -> right != NULL) q.push(x -> right);
                }
            }
            return cnt;
        }
    };