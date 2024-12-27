#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
        //int lb = lower_bound(nums.begin() , nums.end() , target) - nums.begin();
        //return lb;
        int low = 0,high = nums.size()-1,ans = nums.size();
        while( low <= high){
            int mid = ( low + high) >> 1;
            if(nums[mid] >= target){
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
int main(){
    int target = 2;
    vector<int> v { 1, 3, 5, 9};
    cout<<"Insert "<<target<<" at "<<searchInsert(v , target);
}