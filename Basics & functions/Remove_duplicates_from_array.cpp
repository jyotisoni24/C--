#include <bits/stdc++.h>
using namespace std;
int remove_duplicate(int a[],int n){
        int res = 1;
        for( int i = 1 ; i < n ; i++){
            if(a[i] != a[res-1]) {
            a[res] = a[i];
            res++;
            }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for( int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cout<<"After removing duplicates the sie of the array will be "<< remove_duplicate(arr,n);
}