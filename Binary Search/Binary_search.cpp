#include <iostream>
using namespace std;
int binarysearch(int arr[] , int n , int key){
    int start = 0;
    int end = n - 1 ;
    int mid = start + (end - start)/2;
    while( start <= end){
        if(key == arr[mid]){
            return mid;
        }
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main(){
    int key = 24;
    int n;
    cin>>n;
    int Arr[n];
    for(int i = 0; i < n ; i++){
        cin>>Arr[i];
    }
    int index = binarysearch(Arr , n , key);
    cout<<key<<" is present is the array at the index "<<index;
    return 0;
}