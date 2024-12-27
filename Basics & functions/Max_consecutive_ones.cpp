class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       long long count = 0,ans = 0;


       //long long int i = 0;
        // while(i < nums.size()){
        //      count = 0;
        //     if(nums[i]==1 && nums[i+1] == 1){
        //         count++;
        //         i++;
        //     }
        //     else if(nums[i] == 0){
        //         i++;
        //     }
        //    else break;
    
        //


        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 1) {
                count++;
                ans = max(ans,count);
            }
            else{
                count = 0;
            }
        }
        return ans;
    }
    

    
};