#include <iostream>
using namespace std;
int GCD(int a , int b){//GCD == HCF
     if(a % b == 0) return b;
     return GCD(b , a % b);
}
int main(){
    int num1 , num2;
    cin>>num1;
    cin>>num2;
    int ans = GCD(num1 , num2);
    cout<<"HCF of "<<num1<<" & "<<num2<<" is "<<ans;
}
