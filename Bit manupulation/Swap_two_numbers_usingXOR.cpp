#include <bits/stdc++.h>
using namespace std;
int main(){
    int a , b;
    cin>>a>>b;
    cout<<"Numbers before swapping are "<<a<<" "<<b<<endl;
    int x = a ^ b;
    b = x ^ b;
    a = x ^ b;
    cout<<"Numbers after swapping are "<<a<<" "<<b<<endl;
}
 
