#include<iostream>
using namespace std;
bool isPallindrome(int n){
    if(n < 0) return false;
    long long int ans = 0;
    int x = n;
    while(x != 0){
        int rem = x % 10;
        ans = ans * 10 + rem;
        x = x / 10;
    }
    return ans==n;
}
int main(){
    int x;
    cout<<"enter x: ";
    cin>>x;
    if(isPallindrome(x)) cout<<"Number is pallindrome";
    else cout<<"number is not pallindrome";
    return 0 ;
}