#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> V;
    vector<int> V2;
     
    for(int i = 0; i< V.size() ; i++){
        int input;
        cin>>input;
       V.push_back( input);
        
    }
    int start = 0;
    int end = V.size() - 1;
    while( start > end){
        if(V[start] == V[end]){
            V2.push_back(V[start]);
        }
        start ++;
        end --;
    }
    for( int x : V2){
        cout<<x<<" ";
    }


}