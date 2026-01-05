#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int odd = 1, even = 0;
        vector<int> ans(nums.size()); // create an answer array of same size as nums
        for(int i = 0; i < nums.size();i++){
            if(nums[i] >= 0){ // if element is positive , place it at even index
                ans[even] = nums[i];
                if(even < nums.size()) even += 2;
            }
            else if( nums[i] < 0 ){ // if element is negative , place it at odd index
                ans[odd] = nums[i];
                if(odd < nums.size()) odd += 2;
            }
        }
        return ans;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {3,1,-2,-5,2,-4};
    vector<int> result = sol.rearrangeArray(nums);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}