#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int maxi = 0;//first initialised it here
        int diameter(TreeNode* root){
            if(root == NULL) return 0;
            int left = diameter(root -> left);
            int right = diameter(root -> right);
            maxi = max(maxi , left + right);//Storing the value of maximum diameter and updating it at every iteration
            return max(left , right) + 1;
        }
        int diameterOfBinaryTree(TreeNode* root) {
            maxi = 0;//here reinitiliaze it to 0
            diameter(root); // calculate the value using this function here value will get stored in maxi
            return maxi;
        }
};