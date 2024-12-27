#include<bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int>& nums){
    vector<int> ans;
    int n = nums.size();
    int cnt1 = 0 , cnt2 = 0 , el1 = 0 , el2 = 0;
    for(int i = 0 ; i < n ; i++){
        if(cnt1 == 0 && nums[i] != el2) {
            el1 = nums[i];
            cnt1 =1;
        }
        else if(cnt2 == 0 && nums[i] != el1) {
        el2 = nums[i];
        cnt2 = 1;
        }
        else if(el1 == nums[i]) cnt1 ++;
        else if(el2 == nums[i]) cnt2++;
        else{
        if(cnt1 != 0) cnt1--;
        if(cnt2 != 0) cnt2--;
        }
    }
    int cnt3 = 0, cnt4 = 0;
    for(int i = 0 ; i < n ; i++){
        if(nums[i] == el1) cnt3++;
        else if(nums[i] == el2) cnt4++;
    }
    if(cnt3 > n/3) ans.push_back(el1);
    if(cnt4 > n/3) ans.push_back(el2);
    return ans;
}
int main(){
    vector<int> v {2,1,3,4,1,5,6,1};
    vector<int> res (majorityElement(v));
    for(int i = 0 ; i < res.size() ; i++){
        cout<<res[i];
    }
}