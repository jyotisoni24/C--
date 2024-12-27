#include <bits/stdc++.h>
#include<vector>
using namespace std;
int kadane(vector<int>& nums) {
        int max_sum = INT_MIN;
        int currentSum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
             currentSum += nums[i];
            if(currentSum > max_sum) max_sum = currentSum;
            if(currentSum < 0) currentSum = 0;
            }
           return max_sum; 
}
int maxSubarraySumCircular(vector<int>& nums) {
        int max_sum = kadane(nums);
        int Sum = accumulate(nums.begin() , nums.end(),0);
        for( int i = 0 ; i < nums.size() ; i++){
            nums[i] =   -1*nums[i] ;
        }
        int normal_sum = kadane(nums);
        int circular_sum  = Sum + normal_sum;
        if(circular_sum == 0) return max_sum;
        else return max(max_sum , circular_sum);

}
int main(){
    vector<int> v1 {1,-2,3,-2};
    vector<int> v2 {-3,-2,-3};
    vector<int> v3 {5,-3,5};
    cout<<"maximum circular sums are "<<maxSubarraySumCircular(v1)<<" , "<<maxSubarraySumCircular(v2)<<" & "<<maxSubarraySumCircular(v3);
}