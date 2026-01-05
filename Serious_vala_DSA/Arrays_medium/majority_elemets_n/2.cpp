#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt1 = 0 , ele1 = -1;
        for(int i = 0; i < n; i++){
            if(cnt1 == 0) {
                ele1 = nums[i];
                cnt1++;
            }
            else if(nums[i] == ele1) cnt1++;
            else cnt1--;
        }
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == ele1) cnt++;
        }
       return ele1;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << sol.majorityElement(nums) << endl;
    return 0;
}