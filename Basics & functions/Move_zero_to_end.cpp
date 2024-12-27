#include <bits/stdc++.h>
using namespace std;
  void moveZeroes(vector<int>& nums) {
        int res = 0;
        for(int i = 0; i <= nums.size()-1 ; i++){
            if(nums[i] != 0){
                swap(nums[i] , nums[res]);
                res++;
            } 
        }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for( int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    moveZeroes(arr);
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}