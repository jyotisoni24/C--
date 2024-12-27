#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
void print(int i , int n){
    if(cnt == n) return;
    cout<<i<<endl;
    cnt++;
    print(i+1,n);
}
int main(){
    print(1,10);
}