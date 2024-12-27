#include<iostream>
#include <vector>
using namespace std;
bool isPossible(vector<int> &boards , int k , int n, int mid ){
    int painterCount = 1;
    int boardSum = 0;
    for(int i = 0 ; i < n ; i++){//
        if(boardSum + boards[i] <= mid){
            boardSum+=boards[i];
        } 
        else{
            painterCount++;
            if(painterCount > k || boards[i] > mid ){
                return false;
            }
           boardSum = boards[i];  
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k,int n)
{
    int s = 0;
    int sum = 0;
    for(int i = 0; i <  n ; i++){
        sum += boards[i];
    }
    int e =  sum;
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(isPossible(boards,k,n,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    } 
    return ans;
}int main(){
    vector<int> arr{48,90};
    int k = 2;
    int ans = findLargestMinDistance(arr , 2 , 2);
    cout<<ans;
}
