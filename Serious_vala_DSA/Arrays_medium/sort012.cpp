#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    //Dutch National Flag Algorithm 
    void sortColors(vector<int>& nums) {
        int low = 0 , mid = 0 , high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 0){ // if element is 0 , swap it with low index element and increment both low and mid
                swap(nums[low] , nums[mid]);
                low++;
                mid++;            }
            else if(nums[mid] == 1) mid++; // if element is 1 , just increment mid
            else if(nums[mid] == 2){ // if element is 2 , swap it with high index element and decrement high
                swap(nums[mid] ,nums[high]);
                high--;
            }
        }
    }
};
int main() {
    Solution sol;
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sol.sortColors(nums);
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}