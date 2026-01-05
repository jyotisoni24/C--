#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        vector<int> res;
        unordered_set<int> s; // using set to store unique elements
        int n = a.size();
        int m = b.size();
        for(int i = 0; i < n; i++){
            if(s.find(a[i]) == s.end()) s.insert(a[i]); // checking if element is not present in set then only insert
        }
        for(int i = 0; i < m; i++){
            if(s.find(b[i]) == s.end()) s.insert(b[i]); // checking if element is not present in set then only insert
        }
        for(int it: s) res.push_back(it); // inserting elements of set into result vector
        sort(res.begin(), res.end()); 
        return res; 


        //This approach works only when both arrays are sorted
        // int i = 0 ,j = 0;
        // while(i < n && j < m){
        //     if (a[i] < b[j]) {
        //         if (res.empty() || res.back() != a[i])
        //             res.push_back(a[i]);
        //         i++;
        //     }
        //     else if(a[i] > b[j]){
        //         if(res.empty() || res.back() != b[j]) { // to avoid duplicates
        //             res.push_back(b[j]);
        //         }
        //         j++;
        //     }
        //     else{
        //         if (res.empty() || res.back() != a[i])
        //             res.push_back(a[i]);
        //         i++;
        //         j++;
        //     }
        // }
        // while(i < n) { // to insert remaining elements of array a
        //     if (res.empty() || res.back() != a[i])
        //         res.push_back(a[i]);
        //     i++;
        // }
        // while(j < m){ // to insert remaining elements of array b
        //     if (res.empty() || res.back() != b[j])
        //         res.push_back(b[j]);
        //     j++;
        // }
        // return res;
    }
};
int main() {
    Solution sol;
    vector<int> a = {10 , 2, 6, 3};
    vector<int> b = {2, 10 , 10 , 8};
    vector<int> result = sol.findUnion(a, b);
    cout << "Union of arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}