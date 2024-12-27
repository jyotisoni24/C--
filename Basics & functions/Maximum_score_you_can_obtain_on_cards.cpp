#include <bits/stdc++.h>
using namespace std;
int maximumScore(vector<int> &nums , int k){
    int ans;
    int n = nums.size();
    int leftSum = 0 , rightSum = 0;
    for(int i = 0 ; i < k ; i++){
        leftSum += nums[i];
    }
    int rightInd = n-1 , maxSum = leftSum;
    for(int i = k-1 ; i>= 0 ; i--){
        leftSum = leftSum - nums[i];
        rightSum = rightSum + nums[rightInd];
        rightInd--;
    }
    maxSum = max(maxSum , leftSum + rightSum);
    return maxSum;
}
int main(){
    vector<int> v = {1,2,3,4,5,6,1};
    int k = 3;
    cout<<"Maximum score you can obtain on cards is "<<maximumScore(v,3);
}