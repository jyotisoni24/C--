#include <bits/stdc++.h>
using namespace std;
    // int start = 0;
    // int end = n - 1 ;
    // int mid = start + (end - start)/2;
    // while( start < end){
    //     if(arr[mid] > arr[mid - 1]){
    //         start = mid + 1;
    //     }
    //     else{
    //         end = mid ;
    //     }
    //     mid = start + (end - start)/2;
    // }
    // return end;
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(nums.size() == 1) return 0;
        if(nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;
        int low = 1 , high = n-2;
        while(low <= high){
            int mid = (low + high)>>1;
            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) return mid;
            else if(nums[mid] < nums[mid + 1])  {
                low = mid + 1;
            }
            else high = mid-1;
        }
        return -1;
    }
int main(){
    vector<int> array  {1 , 2 , 3 , 1};
    int peak =  findPeakElement(array);
    cout<<"Peak element is at index "<<peak;
    return 0;
}