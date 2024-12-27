# include <iostream>
using namespace std;
int main(){
    int num1, num2, hcf , min;
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;
    min = num1;
    if(num2 < min){//2 and 1 min = 1  1 2
         min = num2;
    }
    while(min >= 0){
        if(num1 % min == 0 && num2 % min == 0){
            hcf = min;
            break;
        }else{
            min--;
        }
    }
    cout<<hcf;
}