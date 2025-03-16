class Solution {
    public:
        int maxSum(TreeNode* root , int &maxi){
            //TreeNode* curr = root;
            if( root == NULL) return 0;
            //if( root -> left == NULL &&  root -> right == NULL) return  root -> val;
            int leftSum = maxSum( root->left , maxi);
            int rightSum = maxSum( root->right , maxi);
            if(leftSum < 0) leftSum = 0;
            if(rightSum < 0) rightSum = 0;
            maxi = max(maxi , leftSum + rightSum +  root->val);
            return  max(leftSum , rightSum) +  root->val;
        }
        int maxPathSum(TreeNode* root) {
            int maxi = INT_MIN ;
            maxSum(root , maxi);//here we are not returning the answer of this function because it returns height only, we dont want that 
            //we initialising maxi again and then return its value because its value will get stored in func
            return maxi;
        }
    };

    //With maxi as a global variable

    class Solution {
        public:
            int maxi = 0;     //here we save it a global variable       
            int maxSum(TreeNode* root ){
                //TreeNode* curr = root;
                if( root == NULL) return 0;
                //if( root -> left == NULL &&  root -> right == NULL) return  root -> val;
                int leftSum = maxSum( root->left);
                int rightSum = maxSum( root->right);
                if(leftSum < 0) leftSum = 0;
                if(rightSum < 0) rightSum = 0;
                maxi = max(maxi , leftSum + rightSum +  root->val);
                return  max(leftSum , rightSum) +  root->val;
            }
            int maxPathSum(TreeNode* root) {
                maxi = INT_MIN; // here again initialising it to int_min and then its value will get updated whenever maxSum is called
                maxSum(root);
                return maxi;
            }
        };
//Best answer and explaination by CodeStorywithMIK
class Solution {
    public:
        int maxi;            
        int maxSum(TreeNode* root ){
            if( root == NULL) return 0;
            int leftSum = maxSum( root->left);
            int rightSum = maxSum( root->right);
            //leftSum is good as well as rightSum also good usme root ki value add kari aur store kar diya 
            //we cannot return this path as it has already made a path like downward parabola
            int neeche_hi_answer_mil_gaya = leftSum + rightSum + root -> val;

            //isme may be only left se acha aya ho ya right se to ek hi path banega and
            // we can return it to root node to explore aur maximum thatswhy we will return it
            int koi_ek_Aacha_mila_hai = max(leftSum , rightSum) + root -> val;

            //Sirf root node best hai left and right sum minimum the or negative the , we can return it also to the parent node
            int sirf_root_hi_acha_hai = root -> val;

            //maximum of all 3 possible answers... we will also not return it because it include 1st case of neeche_hi_answer_mil_gaya
            maxi = max({maxi ,neeche_hi_answer_mil_gaya , koi_ek_Aacha_mila_hai , sirf_root_hi_acha_hai });

            //we will return maximum of 2nd hai 3rd only
            return  max(sirf_root_hi_acha_hai , koi_ek_Aacha_mila_hai);
        }
        int maxPathSum(TreeNode* root) {
            maxi = INT_MIN;
            maxSum(root);
            return maxi;
        }
    };