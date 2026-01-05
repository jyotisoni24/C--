#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        for(int i = 1; i < n; i++){ //COunt how many times the ascending order breaks 
            if(nums[i] < nums[i-1]) cnt++;
        }
        if(nums[n-1] > nums[0]) cnt++; //check if the lat element is greater than first element or not , which meants array is sorted
        
        return cnt <= 1; // if the ascending order break is greater than 1 return false
    }
};
int main() {
    Solution sol;
    vector<int> nums = {3,4,5,1,2};
    bool result = sol.check(nums);
    cout << (result ? "True" : "False") << endl;
    return 0;
}