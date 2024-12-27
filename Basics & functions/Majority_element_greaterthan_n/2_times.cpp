#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &nums){
    int n =  nums.size();
    int cnt = 0 , el1 = 0;
    for(int i = 0 ; i < n ; i++){
        if(cnt == 0){
            el1 = nums[i];
            cnt = 1;
        }
        else if(el1 == nums[i]) cnt++;
        else{cnt--;}
    }
    int cnt2 = 0;
    for(int i = 0 ; i< n; i++){
        if(nums[i] == el1) cnt2++;
    }
    if(cnt2 > n/2) return el1;
    return -1;
}
int main(){
    vector<int> v {3 , 3 , 3 , 7 , 7 , 5 , 5, 3 , 3 , 1 , 1 , 1 , 1 , 1 , 1 ,1 , 1};
    cout<<"The element present in majority > n/2 times is "<<majorityElement(v);
}