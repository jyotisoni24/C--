#include <iostream>
using namespace std;
int main(){
    int x,n,power = 1;
    cout<<"Enter x: ";
    cout<<"Enter n: ";
    cin>>x;
    cin>>n;
    for(int i = 1; i <= n ; i++){// n = 4 , x=7 , i = 1 , 
        power = power * x;
    }
    cout<<"Power of x to n times is: "<<power<<endl;
    return 0;
}