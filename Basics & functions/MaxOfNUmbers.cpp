#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0; i<=N-1 ; i++){
        cin>>arr[i];
    } 
    int max = arr[0];
    for(int j=0; j<=N-1; j++){
        if(arr[j]>max){
            max = arr[j];
        }
    }
    cout<<"Maximum number is: "<<max;

}