class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if(nums.size() == 1) return nums[0];
        //generated max heap
        priority_queue<int> pq;
        for(int i = 0 ; i < nums.size()  ; i++) pq.push(nums[i]);
        int cnt = 1 ;
        int top1 = INT_MIN;
        //running loop for k-1 times
        while( cnt <= k-1){
            cnt++;
            top1 = pq.top();
            pq.pop();
        }
        return pq.top();
    }
};