#include <iostream>
using namespace std;
int FirstOcc(int arr[], int n , int key){
    int s = 0;
     int e = n-1;
     int mid = s + (e-s)/2;
     int ans = -1;
     while(s<=e){
        if(arr[mid] ==  key){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
     }
     return  ans;
}
int  LastOcc(int arr[], int n ,int key ){
    int s = 0;
     int e = n-1;
     int mid = s + (e-s)/2;
     int ans = -1;
     while(s<=e){
        if(arr[mid] ==  key){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
     }
     return  ans;
}
int main(){
    int array[5] = {1 , 3 , 3 , 3 ,5};
    int index = FirstOcc(array , 5 , 3 );
    int index2 = LastOcc(array , 5 , 3 );
    int NumberOfOccurance = (index2 - index) + 1;
    cout<<"FIrst Occurance of 3 is at index "<<index<<endl;
    cout<<"Last Occurance of 3 is at index "<<index2<<endl;;
    cout<<"Number of Occurance of 3 is "<<NumberOfOccurance;
    return 0;
}