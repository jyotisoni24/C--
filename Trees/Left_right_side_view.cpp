#include <bits/stdc++.h>
using namespace std;


//LEFT VIEW
class Solution {
    public:
      vector<int> leftView(Node *root) {
          if(root == NULL) return {};
          vector<int>ans;
          queue<Node*> q;
          q.push(root);
          while(!q.empty()){//Running loop till queue is empty
              int size = q.size();
              Node* n = NULL;//made a dummy node
              while(size > 0){//this loop will run till the size of the array
                n = q.front();
                q.pop();
                //We are doing BFS in opposite direction i.e right to left for getting the right view
                if(n -> right) q.push(n -> right);//First we push right element 
                if(n -> left) q.push(n -> left);
                size--;
              }
              ans.push_back(n->data);
          }
          return ans;
      }
  };

//RIGHT VIEW
class Solution {
    public:
        vector<int> rightSideView(TreeNode* root) {
            if(root == NULL) return {};
            vector<int>ans;
            queue<TreeNode*> q;
            q.push(root);
            while(!q.empty()){
                int size = q.size();
                TreeNode* n = NULL;
                while(size>0){
                    n = q.front();
                    q.pop();
                    if(n -> left) q.push(n -> left);
                    if(n -> right) q.push(n -> right);
                    size--;
                }
                ans.push_back(n-> val);
            }
            return ans;
        }
    };