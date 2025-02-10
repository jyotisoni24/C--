class Solution {
    public:
    //This is the most optimised approach apart from this we can calculate sum using 2/3 nested loops also
        int subarraySum(vector<int>& nums, int k) {
            unordered_map<int , int> mp;
            mp.insert({0 , 1});
            int  sum = 0 , cnt = 0; 
            for(int i = 0 ; i < nums.size() ; i++){
                sum += nums[i];
                //checking if sum-k is present in k or not 
                if(mp.find(sum - k) != mp.end()) { //yes present
                    cnt += mp[sum - k];//add the count of sum-k
                }
                mp[sum]++;//insert the sum in the map data structure
            }
            return cnt;
            
        }
    };