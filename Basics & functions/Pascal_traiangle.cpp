class Solution {
public:
    vector<int> temp(int numrows){
        vector<int>nums;
        long long ans = 1;
        nums.push_back(1);
        for(int i = 1; i < numrows; i++){
            ans = ans * (numrows-i);
            ans = ans / i;
            nums.push_back(ans);
        }
        return nums;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1 ; i <= numRows ; i++){
            ans.push_back(temp(i));
        }  
        return ans;
    }
};