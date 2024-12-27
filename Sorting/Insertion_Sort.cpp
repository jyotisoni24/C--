#include <bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &arr){
    int n = arr.size();
    for(int i = 1 ; i < n ; i++){
        int temp = arr[i];
        for(int j = i-1 ; j>= 0 ; j--){
            if(arr[j] > temp){
                //shift 
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            arr[j+1] = temp;
        }
    }
}
int main(){
    vector<int> a {4 , 12 , 11 , 20};
    insertionSort(a);
    for(int i = 0 ; i < 4 ; i ++){
        cout<<a[i]<<" "<<endl;
    }
}