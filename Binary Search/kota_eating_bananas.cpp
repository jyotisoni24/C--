#include <iostream>
#include <math.h>
using namespace std;
bool isKokoEat(int arr[], int n , int h, int mid){
    int pilesSum = 0;
    for(int i = 0 ; i<n ;i++){
        pilesSum += ceil((double)arr[i]/(double)mid);
    }
    if(pilesSum > h){
        return false;
    }
    return true;
}
int KokoSpeed( int arr[], int n, int h ){
    long long s = 0;
    int maxi = -1;
    for(int i = 0; i < n ; i ++){
        maxi = max(arr[i],maxi);
    }
    long long e = maxi;
    int ans = -1;
    while(s <= e){
        int mid = s + (e - s)/2;
        if(isKokoEat(arr,n,h,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
       
    }
    return ans;
}
int main(){
    int arr[4] = {3 , 6 , 7 , 11};
    int h = 8;
    cout<<"koko should maintain speed of "<< KokoSpeed(arr,4,8)<<" bananas per hour"<<endl;
    return 0;
}