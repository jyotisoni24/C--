#include <bits/stdc++.h>
using namespace std;
int Search(vector<int> &nums , int k){
    int ans = -1 , s = 0 , e = nums.size()-1;
    while(s <= e){
        int mid = s + (e - s)/2;
        if(nums[mid] == k) ans = mid;
        if(nums[mid] >= nums[s]){//4, 5 , 1 , 2, 3 target = 2
            if(k >= nums[s] && k <= nums[mid] ) e = mid - 1;
            else s = mid + 1;
        }
        else if(nums[mid] <= nums[e]){//yes
            if(k >= nums[mid] && k <= nums[e]) s = mid + 1;
            else e = mid - 1;
        }
    } 
    return ans;
}
int main(){
    vector<int> v { 9 , 10 , 12 , 1 , 2 , 3 , 4 };
    int x = 12;
    int res = Search(v,x);
    cout<<x<<" is present at "<<res<<" index "<<endl; 
}
     