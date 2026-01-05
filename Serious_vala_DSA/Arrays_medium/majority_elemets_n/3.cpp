#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ele1 = INT_MIN , ele2 = INT_MIN, cnt1 = 0 , cnt2 = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(ele2 != nums[i] && cnt1 == 0) { // assigning ele1 but check if its not equal to ele2
                ele1 = nums[i];
                cnt1 = 1; //cnt1 incremented
            }
            else if(ele1 != nums[i] && cnt2 == 0){ // assigning ele2 but check if its not equal to ele1
                ele2 = nums[i];
                cnt2 = 1; // cnt2 incremented
            }
            else if(ele1 == nums[i]) cnt1++; // incrementing count of ele1
            else if(ele2 == nums[i]) cnt2++; // incrementing count of ele2
            else if(nums[i] != ele1 && nums[i] != ele2) { // decrementing both counts if current element is different from both ele1 and ele2
                cnt1--;
                cnt2--;
            }
        }
        int cnt3 = 0, cnt4 = 0;
        vector<int> ans;
        for(int i = 0; i < n;i++){
            if(ele1 == nums[i]) cnt3++;
            if(ele2 == nums[i]) cnt4++;
        }
        if(cnt3 > n/3) ans.push_back(ele1); // checking if count of ele1 is greater than n/3
        if(cnt4 > n/3) ans.push_back(ele2); // checking if count of ele2 is greater than n/3    
        return ans;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {3,2,3};
    vector<int> result = sol.majorityElement(nums);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}