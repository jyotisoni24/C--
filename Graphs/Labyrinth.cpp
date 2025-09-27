#include <bits/stdc++.h>
using namespace std;
//directions for movement in the maze
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
char dir[] = {'U', 'D', 'R', 'L'};
// Function to check if a cell is valid for movement
bool isValid(int x, int y, int n, int m) {
    return (x >= 0 && x < n && y >= 0 && y < m && maze[x][y] == 1 && !visited[x][y]);
}   
// Function to perform DFS and find the path in the maze
int cnt = 0; // Counter for the number of directions taken
bool bfs(int i , int j , int cnt , vector<vector<char>> &maze , vector<vector<int>> &visited){
    int m = maze.size();
    int n = maze[0].size();
    queue<pair<int, int>> q;
    q.push({i, j}); 
    visited[i][j] = 1; // Mark the starting cell as visited
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        int max_cnt = 0; // Counter for the number of directions taken
        for(int i = 0; i < 4; i++){
            int newX = x + dx[i];
            int newY = y + dy[i];
            if(isValid(newX, newY, m, n) && !visited[newX][newY] && maze[newX][newY] == '.') {
                visited[newX][newY] = 1; // Mark the cell as visited
                q.push({newX, newY});// Add the cell to the queue
                s += dir[i];
                cnt++; // Store the direction
            }
        }
        max_cnt = max(max_cnt, cnt); // Update the maximum count of directions taken
    }
}
// Function to find the path in the maze
string findPath(vector<vector<char>> &maze){
    int m = maze.size();
    int n = maze[0].size();
    cnt = 0;
    vector<vector<int>> visited(m, vector<int>(n, 0)); // Create a visited matrix
    string s = ""; // String to store the path
    for(int i = 0; i < m ; i++){
        for(int j = 0; j < n  ; j++){
            if(visited[i][j] == 0 && maze[i][j] == '.'){
                bfs(i , j , maze, visited); // Call BFS for unvisited cells
            }
        }
    }
}