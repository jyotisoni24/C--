#include <bits/stdc++.h>
using namespace std;
int countNegatives(vector<vector<int>>& grid) {
        int r = grid.size();
        int cnt = 0;
        int c = grid[0].size();nt j = c-1 , i = 0;
        //using binary search for each row
        while(i < r && j >= 0){
            if(grid[i][j] < 0){
                cnt+= r-i;// all the elements below that element will be negative , as the matrix is sorted row wise
                j--;
            }
            else i++;
        }
        return cnt;
    }
int main() {
    vector<vector<int>> grid = {
        {4,3,2,-1},
        {3,2,1,-1},
        {1,1,-1,-2},
        {-1,-1,-2,-3}
    };  
    cout << "Count of negative numbers: " << countNegatives(grid) << endl; // Output: 8
    return 0;
}