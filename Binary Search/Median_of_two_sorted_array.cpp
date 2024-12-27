#include <iostream>
#include <vector>
using namespace std;
double median( vector<int> &a , vector<int> &b){
    int n1 = a.size();
    int n2 = b.size();
    if( n1 > n2) median(b,a);
        int s = 0;
        int e = n1;
        int left = (n1 + n2 + 1)/2;
        int n = n1 + n2;
        while(s <= e){
            int mid1 = s + (e - s)/2;
            int mid2 = left - mid1;
            int l1 = INT_MIN;
            int l2 = INT_MIN;
            int r1 = INT_MAX;
            int r2 = INT_MAX;
            if(mid1 < n1) r1 = a[mid1];
            if(mid2 < n2) r2 = b[mid2];
            if(mid1 - 1 >= 0) l1 = a[mid1 - 1];
            if(mid2 - 1 >= 0) l2 = b[mid2 - 1];
            if(l1 <= r1 && l2 <= r2){
                if( n %2 ==1 ) return (double)max(l1 , l2);
                else return (double)(max(l1,l2) + min(r1,r2))/2.0;
            }
            else if(l1 > r1) e = mid1 - 1;
            else  s = mid1 + 1;
        }
            return 0;
    }
    int main(){
    vector<int> arr1 = {1 , 3 , 4 , 7 , 10 , 13};
    vector<int> arr2 = {2 , 3 , 6 , 15};
    cout<<"Median of these two merged array is "<<median(arr1,arr2)<<endl;
    return 0 ;
}