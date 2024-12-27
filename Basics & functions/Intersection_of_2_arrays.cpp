#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m , n ;
    cin>>m;
    cin>>n;
    int arr1[m] , arr2[n];
    vector<int> ans;
    for(int i = 0 ; i < m ; i++){
        cin>>arr1[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin>>arr2[i];
    }
    // for(int i = 0; i < m ; i++){
    //     for(int j = 0 ; j<n ; j++){
    //         if(arr1[i] == arr2[j]){
    //             ans.push_back(arr1[i]); 
    //             arr2[j] = INT_MIN;
    //             break;
    //         }

    //     }
    // }
    int  i = 0, j= 0;
    while( i<m && j<n){
       if(arr1[i] == arr2[j]){
        ans.push_back(arr1[i]);
        arr1[i] = INT_MIN;
        i++;
        j++;
       }
       else if( arr1[i] < arr2[j]){
       
        i++;
        }
        else {
         j++;
        }
    }
    for(int i = 0; i < ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
}