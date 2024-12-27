#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n <= 1) return n;
    int call1 = fibonacci(n-1);
    int call2 = fibonacci(n-2);
    return call1 + call2;
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
}