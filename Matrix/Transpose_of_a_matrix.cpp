#include<bits/stdc++.h>
#include<vector>
using namespace std;
void transpose(vector<vector<int>>mat,int R , int C){
    for(int i = 0 ; i < R ; i++){
        for(int j = i + 1; j < C; j++){
            swap(mat[i][j] , mat[j][i]);
        }
    }
}
int main(){
    vector<vector<int>> mat;
    int R=3 , C=3;
    for(int i = 0 ; i < R ; i++){
        for(int j = 0 ; j < C ; j++){
            cin>>mat[i][j];
        }
    }
    transpose(mat,R,C);
    for(int i = 0 ; i < R ; i++){
        for(int j = 0 ; j < C ; j++){
            cout<<mat[i][j]<<" "<<endl;
        }
    }
}