#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    int ans = 0;
    cin>>n;
    for ( int i = 0; i<n ;i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }
    for (int i = 1 ; i < n ; i++){
        ans = ans ^ i;
    }
    cout<<ans;
}