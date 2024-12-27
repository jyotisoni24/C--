#include <bits/stdc++.h>
using namespace std;
void SelectionSort(vector<int> &arr){
    int n = arr.size();
    for(int i  = 0 ; i < n ; i++){
        int min_index = i;
        for(int j = i+1 ; j < n ; j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }
        swap(arr[min_index],arr[i]);
    }
}
int main(){
    vector<int> a {4 , 12 , 11 , 20};
    SelectionSort(a);
    for(int i = 0 ; i < 4 ; i ++){
        cout<<a[i]<<" "<<endl;
    }
}