#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt = 0; // cnt to keep track of position to place non-zero element
        for(int i = 0; i < nums.size();i++){
            if(nums[i] != 0){ // if element is non zero , swap it with the element at cnt index
                swap(nums[i], nums[cnt]); 
                cnt++; // increment cnt to point to next position
            }
        }
    }
};
int main() {
    Solution sol;
    vector<int> nums = {0,1,0,3,12};
    sol.moveZeroes(nums);
    cout << "Array after moving zeroes to the end: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}