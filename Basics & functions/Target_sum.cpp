#include <iostream>
#include <vector>
using namespace std;

int main(){  
    vector<int> vector(5);
    int target;
    cout<<"Enter the target sum: ";
    cin>>target;
    for(int i = 0; i < vector.size() ; i++){
        vector.push_back(i);
    }
    for(int i = 0; i < vector.size() ; i++ ){//i=0 j=0 vector[0] + vector[1] == 5 != 7 vector
        for(int j = i + 1 ; j < vector.size() ; j++){
            if(vector[i] + vector [j] == target){
                cout<< i;
                cout<< j;
            }
            else{
                cout<<"Target not found";
            }
        }
    }

     return 0;
}