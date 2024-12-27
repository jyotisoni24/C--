#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; 
    vector<int> V;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 1 ; i < n ; i++){
        if(n % i == 0)  V.push_back(i);
    }
    int sum = 0;
    for(int i = 0 ; i < V.size() ; i++){
        sum += V[i];
    }
    if(sum == n) cout<<"Perfect Number:"<<endl;
    else cout<<"NOt a perfect number"<<endl;
}