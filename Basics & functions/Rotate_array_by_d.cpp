#include <bits/stdc++.h>
using namespace std;

 void reverse(int i , int j , int arr[]){
        while( i >= j){
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
    }
    int main(){
        int n,d;
        cin>> n;
        cin>>d;
        int arr[n];
        for(int i = 0 ; i < n ; i++){ cin>>arr[i];}
        reverse(0 , d-1 , arr);
        reverse(d , n-1 , arr);
        reverse(0 , n-1 , arr);
        for(int i = 0 ; i < n ; i++){ cout<<arr[i]<<" ";}
    } 