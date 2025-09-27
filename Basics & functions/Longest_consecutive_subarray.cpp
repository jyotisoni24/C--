#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(auto it: nums) s.insert(it);
        int number = nums[0];
        int i = 1 , cnt = 1;
        while(i < nums.size()){
            if(s.find(number + 1) != s.end()){
                cnt++;
                number = number + 1;
            }
            else if(i != nums.size() - 1 && s.find(number + 1) == s.end()) number = nums[i];
            i++;
        }
        cout<<"Number is: " << number << endl;
        cout<<"Count is: " << cnt << endl;
        if(s.find(number + 1) != s.end()) cnt++;
        return cnt;
}
int main() {
    vector<int> v {1,0,1,2};
    int result = longestConsecutive(v);
    cout << "Length of the longest consecutive sequence is: " << result << endl;
    return 0;
}