#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int heigh(TreeNode* root){
            if(root == NULL) return 0;
            int left = maxDepth(root -> left);
            int right = maxDepth(root -> right);
            return max(left , right) + 1;
        }
        int maxDepth(TreeNode* root) {
            return heigh(root) ;
        }
    };