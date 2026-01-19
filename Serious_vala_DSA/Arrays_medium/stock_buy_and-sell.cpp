#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> next_greater(n);
        next_greater[n-1] = prices[n-1];
        int maxi = next_greater[n-1];
        for(int i = n-2; i >= 0; i--){
            if(prices[i] >= maxi) {
                next_greater[i] = prices[i];
                maxi = prices[i];
            }
            else next_greater[i] = maxi;
        }
        int profit = 0;
        for(int i = 0; i < n; i++){
            profit = max(profit , next_greater[i] - prices[i]);
        }
        return profit;
    }
};
int main() {
    Solution sol;
    vector<int> prices = {7,1,5,3,6,4};
    cout << sol.maxProfit(prices) << endl;
    return 0;
}