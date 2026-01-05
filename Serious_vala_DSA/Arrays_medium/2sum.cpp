#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Hashing approach
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int sum = nums[i];
            if (mp.find(target - sum) == mp.end())
                mp.insert({sum, i}); // checking if target - sum is present or not , if not then insert the sum in map along with its index
            else
                return {i, mp[target - sum]}; // if its present , return the current index and the index of target - sum
        }
        return {}; // if no combination is present return {}
    }
};
// sorting + 2 pointers
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        vector<pair<int, int>> v;
        for (int i = 0; i < nums.size(); i++)
        {
            v.push_back({nums[i], i}); // storing element along with its index
        }
        sort(v.begin(), v.end());
        /*arr = [4, 1, 7, 2]
        pair vector:
            (4,0) (1,1) (7,2) (2,3)
        sort hone ke baad:
            (1,1) (2,3) (4,0) (7,2)
        */

        //2 pointers approach
        int i = 0, j = n - 1;
        while (i < j)
        {
            int sum = v[i].first + v[j].first;
            if (sum == target)
                return {v[i].second, v[j].second};
            else if (sum < target)
                i++;
            else
                j--;
        }
        return {};
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    if (!result.empty())
    {
        cout << "Indices of the two numbers that add up to " << target << " are: "
             << result[0] << " and " << result[1] << endl;
    }
    else
    {
        cout << "No two numbers add up to " << target << endl;
    }
    return 0;
}
