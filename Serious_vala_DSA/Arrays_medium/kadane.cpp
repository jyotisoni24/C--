#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int maxSUm = INT_MIN ,currsum = 0;
        for(int i = 0; i < nums.size();i++){
            if(currsum < 0) currsum = 0; // if currsum is negative , then we start a new subarray from current element
            currsum += nums[i];// add current element to currsum
            if(currsum > maxSUm ) maxSUm = currsum; // update maxSum if currsum is greater than maxSum
        }
        return maxSUm;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << sol.maxSubArray(nums) << endl;
    return 0;
}