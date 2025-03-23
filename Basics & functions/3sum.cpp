#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> triplet( int n , vector<int> &arr){
    vector<vector<int>> ans;
    n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        //remove duplicates:
        if (i != 0 && arr[i] == arr[i - 1]) continue;

        //moving 2 pointers:
        int j = i + 1;
        int k = n - 1;
        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0) {
                j++;
            }
            else if (sum > 0) {
                k--;
            }
            else {
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                //skip the duplicates:
                while (j < k && arr[j] == arr[j - 1]) j++;
                while (j < k && arr[k] == arr[k + 1]) k--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {  -2 , 0  , 1 , 1 , 2};
    int n = arr.size();
    vector<vector<int>> ans = triplet(n, arr);
    for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int countTriplets(vector<int> &arr, int target)
// {
//     int n = arr.size(), cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int j = i + 1, k = n - 1;
//         if (arr[i] == arr[i - 1] && i != 0)
//             continue;
//         while (j < k)
//         {
//             if (arr[i] + arr[j] + arr[k] < target)
//                 j++;
//             else if (arr[i] + arr[j] + arr[k] > target)
//                 k--;
//             else
//             {
//                 cnt++;
//                 j++;
//                 // while(j < k && arr[j] == arr[j-1]) j++;
//                 while (j < k && arr[k] == arr[k + 1])
//                     k--;
//             }
//         }
//     }
//     return cnt;
// }
// int main()
// {
//     vector<int> arr {1, 1, 1, 1, 1, 1};
//     int target = 3;
//     cout << countTriplets(arr, target) << endl;
// }
