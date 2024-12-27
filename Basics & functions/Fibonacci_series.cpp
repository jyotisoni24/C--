#include <iostream>
using namespace std;
int fib(int x){
    int a = 0 , b = 1 , c;
    if( x == 0 ) return 0;
    else{
    for(int i = 2 ; i <= x ; i++){
        c = a + b ;
        a = b;
        b = c;
    }
    return c;
    }
}
int main(){
    int n;
    cout<<"Enter x: ";
    cin>>n;
    int ans = fib(n);
    cout<<ans;
}