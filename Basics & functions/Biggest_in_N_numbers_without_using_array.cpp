#include <iostream>
using namespace std;
int main(){
    int limit;
    cout<<"Enter the  limit: ";
    cin>>limit;
    int i = 0;
    int max = INT_MIN;
    while(i <= limit){
        cin>>i;
    for(int j = 0 ; j <= limit ; j++){
        if(j > max) max = j;
    }
    limit--;
    }
    cout<<max;
}