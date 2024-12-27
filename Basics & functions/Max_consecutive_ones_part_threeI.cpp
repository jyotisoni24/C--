#include <bits/stdc++.h>
using namespace std;
int maxConsecutive1s(vector<int> &nums , int k){
    int l = 0 , r = 0 , zeroes = 0 ,  maxLength = 0 ,len;
    while(r < nums.size()){
        if(nums[r] == 0) zeroes++;
        if(zeroes > k){
            if(nums[l] == 0) zeroes--;
            l++;
        }
        else if(zeroes <= k) len = r - l + 1;
        maxLength = max(maxLength,len);
        r++;
    }
    return maxLength;
}
int main(){
    vector<int> v {0 , 0 , 1 , 1, 0, 0 , 1 , 1  , 1 , 1};
    int k = 2;
    cout<<"Maximum 1's length will be "<<maxConsecutive1s(v,k)<<endl;
}