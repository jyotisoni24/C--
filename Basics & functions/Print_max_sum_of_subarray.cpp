class Solution {
  public:
    // Function to find pair with maximum sum
    
    int pairWithMaxSum(vector<int> &arr) {
        int ans = 0;
        for(int i = 0 ; i < arr.size() - 1 ; i++){
            ans = max(arr[i] + arr[i+1] , ans);
        }
        return ans;
    }
};
