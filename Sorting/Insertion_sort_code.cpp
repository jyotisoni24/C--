#include <iostream>
#include <vector>
using namespace std;
void InsertionSort(vector <int>&arr ,int n){
    int j;
    n = arr.size();
    for(int i = 1 ; i < n ; i++){
        int  temp = arr[i];
        int j = i - 1;
    while(j >=0){
        if(arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        else{
        break;
    }
    }
     arr[j+1] = temp;
    }
}
int main(){
    vector<int> a {4 , 12 , 11 , 20};
    int size = sizeof(a) / sizeof(a[0]);
    InsertionSort(a,size);
    for(int i = 0 ; i < 4 ; i ++){
        cout<<a[i]<<" "<<endl;
    }
}