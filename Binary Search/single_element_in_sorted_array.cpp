#include <bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int>& nums) {
        int  n = nums.size();
        if(n == 1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];//if first and second elements are not equal then the first one is single as the array is sorted
        if(nums[n-1] != nums[n-2]) return nums[n-1];//if last and second last elemnt is not equal then last one is the ans
        int low = 1, high = n - 2;
        while(low <= high){
            int mid = (low + high) >> 1;
            if(nums[mid] == low || nums[mid] == nums[high]) return nums[mid];
            //if nums[mid] nums[mid-1] ke barabar nhi hain and nums[mid] nums[mid+1] ke barabar nhi it means nums[mid] is single
            if(nums[mid] != nums[mid -1] && nums[mid] != nums[mid+1]) return nums[mid];
            // it means abhi tak single element aaya nhi hai.. because mid agar odd hai to vo apne peeche vale se match kar raha hai and even hai to apne age vale se
            else if((mid % 2 == 1 && nums[mid] == nums[mid-1]) || (mid %2 == 0 && nums[mid] == nums[mid+1])) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
}
int main(){
    vector<int> v {1 , 1, 2, 2 , 3, 3 ,4, 5, 5, 6, 6};
    cout<<"Single elment in array is "<<singleNonDuplicate(v);
}