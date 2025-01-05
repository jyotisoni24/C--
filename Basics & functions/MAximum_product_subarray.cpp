// class Solution {
//   public:
//     // Function to find maximum product subarray
//     int maxProduct(vector<int> &arr) {
//         int n = arr.size();
//         int prefix = 1, suffix =1, maxi = INT_MIN;
//         for(int i = 0 ; i< n ; i++){
//             if(arr[i] == 0){
//                 prefix = 1;
//                 maxi = max(maxi , 0);
//             }
//             else
//             {prefix = prefix * arr[i];
//             maxi = max(maxi , prefix);}
//         }
//         for(int i = n-1 ; i >= 0 ; i--){
//             if(arr[i] == 0){
//                 suffix = 1;
//                 maxi = max(maxi , 0);
//             }
//             else
//             {suffix*= arr[i];
//             maxi = max(maxi , suffix);}
//         }
//         return maxi;
//     }
// };
#include <bits/stdc++.h>
using namespace std;
bool binarySearch(int key, vector<int> &arr)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) >> 1;
        if (arr[mid] == key)
        {
            return true;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return false;
}
int main()
{
    vector<int> arr{2, -3, 4, 1, 1, 7};
    int mini = INT_MAX;
    int maxi_ele = *max_element(arr.begin(),arr.end());
    sort(arr.begin() , arr.end());
        for(int j = maxi_ele-1; j > 0 ; j--){
                    if(!binarySearch(j,arr)){
                        mini = min(mini , j);
                    }
                    else ;
                }
        if(mini == INT_MAX){mini = maxi_ele + 1;}
        cout<<mini<<endl;
}


//Cycle sort
// C++ program to find the first missing positive number 
// using cycle sort

#include <iostream>
#include <vector>
using namespace std;

// Function for finding the first missing positive number
int missingNumber(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {

        // if arr[i] is within range [1, n] and arr[i] is
        // not placed at (arr[i]-1)th index in arr
        while (arr[i] >= 1 && arr[i] <= n
               && arr[i] != arr[arr[i] - 1]) {
                   
            // then swap arr[i] and arr[arr[i]-1]
            // to place arr[i] to its corresponding index
            swap(arr[i], arr[arr[i] - 1]);
        }
    }

    // If any number is not at its corresponding index 
    // then it is the missing number
    for (int i = 1; i <= n; i++) {
        if (i != arr[i-1]) {
            return i;
        }
    }

    // If all number from 1 to n are present 
    // then n + 1 is smallest missing number
    return n + 1;
}

int main() {
    
    vector<int> arr = {2, -3, 4, 1, 1, 7};
    cout << missingNumber(arr);
    return 0;
}