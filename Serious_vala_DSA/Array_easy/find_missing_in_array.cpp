#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        // long long sum = n*(n+1)/2; // Using formula to calculate sum of first n natural numbers
        // long long actual_sum = accumulate(nums.begin() , nums.end() , 0); // Calculating sum of elements in the array
        // return sum - actual_sum;
        //XOR Approach
        int x = 0;
        for(int i = 0; i < n; i++){
            x ^= nums[i];
        }
        for(int i =0; i <=n; i++) x ^= i;
        return x;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1,2,3,4,5};
    cout << "Missing number: " << sol.missingNumber(nums) << endl; // Output: 2
    return 0;
}