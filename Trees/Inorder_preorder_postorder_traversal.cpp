#include <bits/stdc++.h>
using namespace std;

//Inorder
class Solution {
    public:
      // Function to return a list containing the inorder traversal of the tree.
      vector<int> inOrder(Node* root) {
           if(root == NULL) return {};
           vector<int> temp = inOrder(root->left);
           temp.push_back(root->data);
           vector<int> right = inOrder(root->right);
           temp.insert(temp.end() , right.begin() , right.end());
           return temp;
      }
  };

//Preorder
class Solution {
    public:
  
      // Function to return a list containing the preorder traversal of the tree.
      vector<int> preorder(Node* root) {
          if(root == NULL) return {};
          vector<int> temp;
          temp.push_back(root -> data);
          vector<int> left = preorder(root -> left);
          temp.insert(temp.end() , left.begin() , left.end());
          vector<int> right = preorder(root -> right);
          temp.insert(temp.end() , right.begin() , right.end());
          return temp;
      }
  };

//Postorder
class Solution {
    public:
      // Function to return a list containing the postorder traversal of the tree.
      vector<int> postOrder(Node* root) {
          if(root == NULL) return {};
          vector<int> temp = postOrder(root -> left);
          vector<int> right = postOrder(root -> right);
          temp.insert(temp.end() , right.begin() , right.end());
          temp.push_back(root -> data);
          return temp;
    }
};