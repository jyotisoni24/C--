#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1;//jyoti
    string str2;//jyo
    cin>>str1>>str2;
    //Use using two pointers
    int i = 0 , j = 0;
    while(i<=str1.size() && j < str2.size()){
        if(str1[i] == str2[j]) { i++; j++;}
        else i++;
    }
    if(j==str2.size()) cout<<"True"<<endl;
    else cout<<"False"<<endl;
    return 0;
}
