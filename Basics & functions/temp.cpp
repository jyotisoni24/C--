#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int>& nums) {
        if(nums.size() == 1) return nums;
        int ele1 = INT_MAX , cnt1= 0 , ele2 = INT_MAX , cnt2=0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] == ele1) cnt1++;
            else if(nums[i] == ele2) cnt2++;
            else if(cnt1 == 0  && ele2 != nums[i]){
                ele1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2 == 0  && ele1 != nums[i]){
                ele2 = nums[i];
                cnt2 = 1;
            }
            else {cnt1-- ; cnt2--;}
        }
        cout<<ele1<<" "<<ele2<<endl;
        vector<int> ans;
        int cnt3 = 0, cnt4 = 0;
        for(int i  = 0; i < nums.size() ; i++){
            if(nums[i] == ele1) cnt3++;
            else if(nums[i] == ele2) cnt4++;
        }
        if(cnt3 > nums.size()/3) ans.push_back(ele1);
        if(cnt4 > nums.size()/3) ans.push_back(ele2);
        return ans;


}
int main() {
    vector<int> v {4,2,1,1};
    vector<int> result = majorityElement(v);
    cout << "Majority elements are: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}