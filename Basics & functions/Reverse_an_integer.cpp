#include <iostream>
using namespace std;
int reverse(int x) {
       int ans = 0;
       while(x != 0){//52
        int digit = x % 10;//digit = 0
        
        if((ans> INT_MAX/10)|| (ans<INT_MIN/10))
        {
            return 0;
        }
         ans = ans*10 + digit;// 
        x = x/10;//x =5

       } return ans;
}
int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;
    int ans = reverse(num);
    cout<<ans;
}