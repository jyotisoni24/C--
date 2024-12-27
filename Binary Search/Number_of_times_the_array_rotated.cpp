#include <bits/stdc++.h>
using namespace std;
int numberOfTimesArrayRotated(vector<int> &nums)
{
    int s = 0, e = nums.size() - 1, ans = INT_MAX, ind = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] > nums[s])
        {
            ans = min(ans, nums[s]);
            ind = s;
            s = mid + 1;//Import-Module PSReadLine
        }
        else if (nums[mid] < nums[e])
        {
            ans = min(ans, nums[mid]);
            ind = mid;
            e = mid - 1;
        }
    }
    return ind;
}
int main()
{
    vector<int> v{4, 5, 6, 0, 1, 2};
    //  vector<int> v {4 , 5 , 1 , 2 , 3};
    int res = numberOfTimesArrayRotated(v);
    cout << "Array is rotated " << res << " times" << endl;
}