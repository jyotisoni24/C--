#include <iostream>
using namespace std;
int countZeroes(int n){
    int ans = 0;
    for(int i = 5 ; i <= n ; i = i*5){
        ans = ans + (n/i);
    }
    return ans;
}
int main(){
    int num;
    cin>>num;
    int res = countZeroes(num);
    cout<<"Number of trailing zeroes in factorial of "<<num<<" is "<<res;
    return 0;
}