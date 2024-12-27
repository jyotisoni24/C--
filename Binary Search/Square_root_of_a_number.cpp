#include <iostream>
using namespace std;
long long int IntegerVal(int n){
    int s = 0;
    int e = n;
    long long int mid = s + (e - s)/2;
    int ans = -1;
    while (s<=e){
        if(mid*mid == n){//if mid is the sqaure root of n
            return mid;
        }
        else if(mid*mid < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}
double MorePrecision(int n , int precision , int tempSol){
    double factor = 1;
    double ans = tempSol;//temp sol comes from the IntegerVal function
    for( int i = 0 ; i < precision ; i++){
        factor = factor/10;//jahan tak precision chahiye vahan tak code chalega like 4 decimal places or 5 
        for(double j = ans; j*j < n ; j = j+factor){//hum utni baar factor ko 10 se divide kar karke add kar denge ans mein after checking the conditon
           ans = j; 
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<" Enter n: ";
    cin>>n;
    int tempSol = IntegerVal(n);
    cout<<" Answer is : "<<MorePrecision(n , 4 , tempSol)<<endl;
    return 0;
}