class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        int n = arr.size();
        int prefix = 1, suffix =1, maxi = INT_MIN;
        for(int i = 0 ; i< n ; i++){
            if(arr[i] == 0){
                prefix = 1;
                maxi = max(maxi , 0);
            }
            else
            {prefix = prefix * arr[i];
            maxi = max(maxi , prefix);}
        }
        for(int i = n-1 ; i >= 0 ; i--){
            if(arr[i] == 0){
                suffix = 1;
                maxi = max(maxi , 0);
            }
            else
            {suffix*= arr[i];
            maxi = max(maxi , suffix);}
        }
        return maxi;
    }
};