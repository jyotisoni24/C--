 #include <bits/stdc++.h>
 #include<vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        int currentSum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
             currentSum += nums[i];
            if(currentSum > max_sum) max_sum = currentSum;
            if(currentSum < 0) currentSum = 0;
            }
           return max_sum; 
}
int main(){
    int n;
    cin>>n;
     vector<int> v(n);
    for( int i = 0 ; i < n ; i++){
        cin>>v[i];
    }
    cout<<"Maximum sum in array is "<< maxSubArray(v);
}