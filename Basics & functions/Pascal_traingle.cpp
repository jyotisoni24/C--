class Solution {
    public:
        vector<vector<int>> generate(int numsRows) {
            vector<vector<int>> ans;
            ans.push_back({1});
            for(int i = 1 ; i < numsRows ; i++){
                ans.push_back(vector<int>(i+1));
                ans[i][0] = ans[i][i] = 1;
                for(int j = 1 ; j < i ; j++)
                {
                    ans[i][j] = ans[i-1][j-1]+ans[i-1][j];
                   
                }
            }
            return ans;
        }

        //another approach
        
    };