#include <bits/stdc++.h>
using namespace std;
int SecondLargest(int arr[] , int n){
    int maxi = arr[0];
	    if(n < 2) return -1;
	    for(int i = 0 ; i < n ; i++){
	       if(arr[i] > maxi) maxi = arr[i]; 
	    }
	    int maxi2 = -1;
	    for(int i = 0 ; i < n ; i++){
	         if ( arr[i] != maxi){
	             maxi2 = max(maxi2 , arr[i]);
	         }
	   }
	return maxi2;
	}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for( int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cout<<"Second Largest element in array is "<<SecondLargest(arr,n);
}