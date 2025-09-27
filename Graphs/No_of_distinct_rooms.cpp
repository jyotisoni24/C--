#include <bits/stdc++.h>
using namespace std;
int dx[4] = {-1 , 1 , 0 , 0};
    int dy[4] = {0 , 0 , -1 , 1};
    bool check(int nx , int ny , int n , int m){
        return (nx >= 0 && nx < n && ny < m && ny >= 0);
    }
    void bfs(int i , int j , int sx , int sy , vector<vector<char>>& grid , vector<vector<int>> &visi ){
        int n = grid.size();
        int m = grid[0].size();
        visi[i][j] = 1;
        queue<pair<int , int>> q;
        q.push({i , j});
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for(int k = 0; k < 4 ; k++){
                int nx = r + dx[k];
                int ny = c + dy[k];
                if(check(nx , ny , n , m) && visi[nx][ny] == 0 && grid[nx][ny] == '.'){
                    visi[nx][ny] = 1;
                    q.push({nx , ny});
                }
            }
        }
        
    }
    int countDistinctIslands(vector<vector<char>>& grid) {
        int cnt = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int >>visi( n , vector<int> (m , 0));
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < m ; j++){
                if(grid[i][j] == '.' && visi[i][j] == 0){
                    bfs(i , j , i , j , grid , visi);
                    cnt++;
                }
            }
        }
        return cnt;
    }
    int main(){
        int n;
        int m;
        cin >> n >> m;
        vector<vector<char>> grid (n, vector<char>(m));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }   
        cout << countDistinctIslands(grid) << endl; // Output: 2
        return 0;
    }