#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;
        for(int i = n-2; i >= 0 ; i--){ // finding the peak element of the array
            if(nums[i+1] > nums[i]){
                ind = i;
                break;
            }
        }
        if(ind == -1) { //nums is already sorted , so just reverse it and return
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i = n-1; i > ind ; i--){
            if(nums[ind] < nums[i]){ //finding next greater elements that the nums[ind]
                swap(nums[ind] , nums[i]); //swap that element with the nums[ind] for next permutations
                break; 
            }
        }
        reverse(nums.begin()+ ind +1 , nums.end()); // reverse the array after index , like sort it
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1,2,3};
    sol.nextPermutation(nums);
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}
