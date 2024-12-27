#include <bits/stdc++.h>
#include <vector>
using namespace std;
int blackbox(int mid ,vector<vector<int>> &matrix, int R, int C ){
        int cnt = 0;  
        for(int i = 0 ; i < R ; i++){
            cnt += upper_bound(matrix[i].begin() , matrix[i].end(),mid) - matrix[i].begin();
        }
        return cnt;
    }
int median(vector<vector<int>> &matrix, int R, int C){
        int k = (R*C)/2;
        int mini = INT_MAX , maxi = INT_MIN;
        for(int i = 0 ; i < R ; i++){
            mini = min(mini,matrix[i][0]);
            maxi = max(maxi , matrix[i][C-1]);
        }
        int low = mini, high = maxi,ans = -1;
        while(low <= high){
            int mid = (low + high)>>1;
            int total = blackbox(mid,matrix,R,C);
            if(total>k){
                ans = mid;
                high = mid - 1;
            }
            else low= mid + 1;
        }
        return ans;
}
int main(){
    int R,C;
    vector<vector<int>> matrix(R, vector<int> (C));
    cin>>R>>C;
    for(int i = 0 ; i < R ; i++){
        for(int j = 0 ; j < C; j++){
            cin>>matrix[i][j];
        }
    }
    int ans = median(matrix,R,C);
    cout<<ans<<endl;
}
