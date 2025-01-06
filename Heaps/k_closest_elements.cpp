class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int, int>> pq;
        // adding differences of array elemnts with x and the elemnt in min heap
        // priority queue
        for (int i = 0; i < k; i++) {
            pq.push({abs(arr[i] - x), arr[i]});
        }
        // alloted the top element of the queue in p
        int p = pq.top().first;
        // if the difference of last entered element in the queue is greater
        // than the current difference then pop it out and add the current
        // element along with its differnce
        for (int i = k; i < arr.size(); i++) {
            int p = pq.top().first;
            if (p > abs(arr[i] - x)) {
                pq.pop();
                pq.push({abs(arr[i] - x), arr[i]});
            }
        }
        vector<int> ans;
        //storing the element in array ans
        while (!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
         sort(ans.begin(), ans.end());
        return ans;
    }
};