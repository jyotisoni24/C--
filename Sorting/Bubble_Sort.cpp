#include <iostream> 
#include <vector>
using namespace std;
void bubbleSort(vector<int> &arr , int n){
    for(int i = 1; i<n ; i++){ //For rounds 1 to n-1
        bool swapped = false;
        for(int j = 0 ; j< n-1 ; j++){
            if( arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false) break;//Already sorted (optimized appraoch)
    }
}
int main(){
    vector<int> a {4 , 12 , 11 , 20};
    int size = sizeof(a) / sizeof(a[0]);
    bubbleSort(a,size);
    for(int i = 0 ; i < 4 ; i ++){
        cout<<a[i]<<" "<<endl;
    }
}