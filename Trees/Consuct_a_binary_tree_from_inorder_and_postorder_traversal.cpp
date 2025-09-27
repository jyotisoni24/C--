class Solution {
    public:
        int p;
        TreeNode* conquer(int l , int h , vector<int>& inorder, vector<int>& postorder ){
            if(l > h) return NULL;
            int val = postorder[p];
            TreeNode* root = new TreeNode(val);
            p--;
            int index;
            for(int i = l; i <= h ; i++){
                if(inorder[i] == val) {
                    index = i;
                    break;
                }
            }
            (root -> right) = conquer(index + 1, h , inorder , postorder);
            (root -> left) = conquer(l , index - 1, inorder , postorder);
            return root;
        }
        TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
            int h = inorder.size() - 1;
            p = postorder.size() - 1;
            return conquer(0 , h , inorder , postorder);
        }
};