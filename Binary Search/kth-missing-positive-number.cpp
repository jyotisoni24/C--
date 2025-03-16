class Solution {
    public:
        int findKthPositive(vector<int>& arr, int k) {
            int low = 0 ;
            int high = arr.size()-1;
            while(low <= high){
                int mid = (low + high)>>1;
                int m = mid + 1;
                if(arr[mid] - m < k){
                    low = mid + 1;
                }
                else{
                    high =  mid-1;
                }
            }
            return (low + k);
        }
    };