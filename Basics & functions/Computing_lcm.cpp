#include <iostream>
#include <algorithm>
using namespace std;
int LCM(int a , int b){
    return (a*b)/__gcd(a,b);
}
int main(){
    int num1 , num2;
    cin>>num1;
    cin>>num2;
    cout<<"LCM of "<<num1<<" & "<<num2<<" is "<<LCM(num1,num2);
}