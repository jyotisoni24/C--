//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    //Function for kadane's algorithm
    int kadane(vector<int> & arr){
        int maxSum = 0,currSum = 0;
        for(int i = 0 ; i < arr.size(); i++){
            currSum += arr[i];
            if(maxSum < currSum) maxSum = currSum; 
            if(currSum < 0) currSum = 0;
        }
        return maxSum ;
    }
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {
        int n= arr.size();
        int normal = kadane(arr);
        if(normal == 0) return *max_element(arr.begin() , arr.end());
        int total_sum = accumulate(arr.begin() , arr.end() , 0);
        for(int i = 0 ; i < n ; i++){
            arr[i] = -1* arr[i];
        }
        int reverse = kadane(arr);
        // reverse = reverse * -1;
        int circularSum = total_sum + reverse;
        int maxSum = max(circularSum , normal);
        return maxSum;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends