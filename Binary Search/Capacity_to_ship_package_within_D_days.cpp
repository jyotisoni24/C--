#include <bits/stdc++.h>
using namespace std;
    bool isCapacity(vector<int>& weights, int days, int mid ){
        int n = weights.size() , dayCount = 1, shipSum = 0;
        for(int i = 0; i < n ; i++){
            if(shipSum + weights[i] <= mid ){
                shipSum += weights[i];
            }
            else{
            dayCount++;
            if(dayCount >  days ||  weights[i] > mid ){
                return false;
            }
            shipSum = weights[i]; 
            }
        }
    return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
    int s = 0;
    int sum = 0;
    for(int i = 0; i < weights.size() ; i++){
        sum+=weights[i];
    }
    int e =  sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(isCapacity(weights,days,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
        } 
    return ans;
    }
    int main(){
    vector<int> v {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    cout<<"Capacity required is "<<shipWithinDays(v,days);
    }