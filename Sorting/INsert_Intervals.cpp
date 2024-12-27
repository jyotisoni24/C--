#include <bits/stdc++.h>
using namespace std;
//It can also be done in O(nlogn) by inserting the interval , sort the array and applying concept of merge interval
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        /*
        intervals.push_back(newIntervals);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> v;
        v.push_back(intervals[0]);
        for(int i = 1;i <intervals.size();i++){
            if(intervals[i][0] <= v[v.size()-1][1]){
                v[v.size()-1][1] = max(intervals[i][1] ,  v[v.size()-1][1]);
            }
            else{
                v.push_back(intervals[i]);
            }
        }
        return v;
        */
    
        //This is O(n) apppoach   
        //1st step is jab tak merging nhi hui push back karo 
        //step 2 jab merging shuru ho gayi hai to merge karo
        //3rd jab merging khatam ho gayi hai to jitne bhi bache hain interval unko push back kar do
        vector<vector<int>> ans;
        int m = intervals.size();
        int i = 0 ;
        while(i < m && intervals[i][1] < newInterval[0]){
            ans.push_back(intervals[i]);
            i++;
        }
        //Till merging dont happen
        while( i < m && newInterval[1] >= intervals[i][0]){
            newInterval[0] = min(newInterval[0],intervals[i][0]);
            newInterval[1] = max(newInterval[1] , intervals[i][1]);
            i++;
        }
        //Merging is done
        ans.push_back(newInterval);
        while(i < m){
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
};