#include <bits/stdc++.h>
using namespace std;
int height(vector<int> &heights){
    int n = heights.size();
    int forw[n];
    int back[n];
    int leftMax = 0;
    int rightMax = 0;
    for(int i = 0 ; i < n ; i++){
        forw[i] = max(heights[i] , leftMax);
        // forw.push_back(max(heights[i] , leftMax));
        if(heights[i] > leftMax) leftMax = heights[i];
    }
     for(int i = n-1 ; i >= 0 ; i--){
        back[i] = max(heights[i] , rightMax);
        // back.push_back(max(heights[i] , rightMax));
        if(heights[i] > rightMax) rightMax = heights[i];
    }
    int pani = 0;
    for( int i = 0 ; i < n ; i++){
        pani += abs(heights[i] - min(forw[i] , back[i]));
    }
    return pani;
}
int main(){
    vector<int> v  {0 , 1 , 0 , 2 , 1 , 0 , 1 , 3 , 2 , 1 , 2 , 1};
    // vector<int> v {4 , 2 , 0 , 3 , 2 , 5};
    cout<<"Maximum height of water after rain will be "<<height(v);
}