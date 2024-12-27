#include<bits/stdc++.h>
using namespace std;
int main(){
    int R,C;
    int arr[R][C];
    cout<<"Enter rows"<<endl;
    cin>>R;
    cout<<"Enter columns"<<endl;
    cin>>C;
    for(int i = 0 ; i < R ; i++){
        for(int j = 0 ; j < C; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ; i < C; i++){  //i = 0 
        cout<<arr[0][i]<<endl;
        for(int j = 1 ; j < R ; j++){//j = C-1
            cout<<arr[i][j]<<endl;
            for(int i = C-2 ; i >= 0 ; i--){//i = R-1
                cout<<arr[i][j]<<endl;
                for( int j = R-2 ; j >=1 ; j--){
                    cout<<arr[0][j]<<endl;
                }
        }
    }
}
    return 0;
}