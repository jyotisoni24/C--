#include <iostream>
using namespace std;
int main(){
    int arr[5];
    int count = 0;
    int ans = 0;
    
    for ( int i = 0; i < 5 ; i++){
        cin >>arr[i];
    }
    for( int i = 0; i < 5; i++){
        ans = ans ^ arr[i];
    }
    // for(int i = 0; i < 5 ; i++){// i = 0; j=1; arr[0] != arr[1]  
    //     for(int j = i+1 ; j < 5 ; j++ ){
    //          if(arr[i] == arr[j]){
    //             count++;
    //          }
    //          else{
    //             count = 1;
    //             ans= arr[i];
    //          }
    // }
cout<< ans;
return 0;
}
 
