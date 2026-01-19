#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        long long sum = 0 ;
        int n = grid.size();
        long long sumofSquares = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                sum += grid[i][j]; // calculate sum of elements in the grid
                sumofSquares +=  (long long)grid[i][j] * grid[i][j]; // calculate sum of squares of elements in the grid
            }
        }
        long long newNum = n*n; // total numbers should be n*n
        long long expectedSum = (long long)newNum * (newNum + 1)/2; // sum of first n natural numbers
        long long expectedSquares = (long long)newNum * (newNum + 1) * (2 * newNum + 1)/6; // sum of squares of first n natural numbers
        long long diffsum = expectedSum - sum; // y - x
        long long diffSquare = expectedSquares - sumofSquares; // y^2 - x^2
        long long sumXY = diffSquare / diffsum;                // x + y

        int missing = (diffsum + sumXY) / 2; // missing number
        int repeated = missing - diffsum; // repeating number
        return {repeated , missing};
    }
};
int main() {
    Solution sol;
    vector<vector<int>> grid = {
        {1, 2, 2},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<int> result = sol.findMissingAndRepeatedValues(grid);
    cout << "Repeated: " << result[0] << ", Missing: " << result[1] << endl;
    return 0;
}