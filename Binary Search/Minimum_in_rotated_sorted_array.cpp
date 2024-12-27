#include <bits/stdc++.h>
using namespace std;
int minimumInRotatedSortedArray(vector<int> &nums){
    int s = 0 , e = nums.size()-1 , ans = INT_MAX;
    while(s <= e){
        int mid = s+(e-s)/2;
    //     if(nums[mid] >= nums[s]){
    //         ans = min(ans,nums[s]);
    //         s = mid + 1;
    //     }
    //     else if(nums[mid] <= nums[e]){
    //         ans = min(ans, nums[mid]);
    //         e = mid - 1;
    //     }
     
    // }
    // return ans;
        if(nums[s] < nums[e]) return nums[s];
        if(nums[mid] >= nums[s]){
            s = mid + 1;
        }
        else {
            e = mid;
            }
        } 
        return nums[e];
    }
int main(){
    vector<int> v {4 , 5 , 6 , 7 , 0 , 1 , 2};
    int res = minimumInRotatedSortedArray(v);
    cout<<"Minimum element in array is "<<res<<endl;
}