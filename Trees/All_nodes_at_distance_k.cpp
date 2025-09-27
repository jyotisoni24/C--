#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode *null;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };
void Mapping(TreeNode* root , unordered_map<TreeNode* , TreeNode*>&mp ){
    if(root == NULL) return ;
    if(root -> left) mp[root -> left] = root;
    if(root-> right) mp[root -> right] = root;
    Mapping(root -> left , mp);
    Mapping(root -> right , mp);
}
vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
    vector<int> ans;
    unordered_map<TreeNode* , TreeNode*>mp;
    Mapping(root , mp);
    queue<TreeNode* > q;
    set<TreeNode*> s;
    q.push(target);
    int dist = 0;
    while(!q.empty()){
        if(dist == k){
           while(!q.empty()){
            ans.push_back(q.front() -> val);
            q.pop();
           }
           break;
           
        }
        else{
            int si = q.size();
            for(int i = 0; i < si ; i++){
                TreeNode* x = q.front();
                q.pop();
                if(x -> left) q.push(x -> left); s.insert(x -> left);
                if(x -> right) q.push(x -> right); s.insert(x -> right);
                if(mp.find(x) != mp.end() && s.find(mp[x]) == s.end()){
                    q.push(mp[x]);
                    s.insert(mp[x]);
                }
            }
        
        }
        dist++;
    }
    return ans;
}
int main(){
    TreeNode *root = {3,5,1,6,2,0,8,null,null,7,4};
    cout<<distanceK(root , 5 , 3);
}