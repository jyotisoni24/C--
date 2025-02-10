class Solution {
    public:
      vector<int> findSubarray(vector<int>& arr) {
          int n = arr.size();
          vector<int> ans;
              int start = 0;
              int currSum = 0;
              int ansStart = -1 , ansEnd = -1;
          for(int i = 0 ; i < n; i++){
              if (arr[i] < 0) {
                  currSum = 0; // Reset current sum when negative number is encountered
                  start = i + 1; // Start next subarray after the negative number
              }
              else{
                  currSum += arr[i];
              }//when currSum is greater we will update the maxSum and try to store the start and end index of array
              if(currSum > maxSum) {
                  maxSum = currSum ;
                  ansStart = start;
                  ansEnd = i;
              }
              //if sum is same we will check which length is bigger currsum vali ya max sum vali whiever is bigger take that
              else if(maxSum == currSum) {
                  if(i-start + 1 > ansEnd - ansStart + 1){
                     ansStart = start;
                     ansEnd = i;
                  }
              }
                  
              }
          
              if(ansStart == -1 || ansEnd == -1 ) 
              {
                  ans.push_back(-1);
                  return ans;
              }
              for(int i = ansStart ; i <= ansEnd ; i++){
              
              ans.push_back(arr[i]);
              }
          return ans;
      }
  };