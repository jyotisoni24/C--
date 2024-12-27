#include<bits/stdc++.h>
using namespace std;
int main(){
    //Anagram is permutation of second string
    //apoorva -> roopva oorvap
    string str1;
    string str2;
    cin>>str1>>str2;
    vector<int> v(26,0);
    for(int i = 0 ; i < str1.size();i++){
        v[str1[i]-'a']++;
    }
    int cnt = 0;
    //it means agar maine jyoti ko v mein add kar rakha hai to str2 mein suppose itjyo hai usme har element ko -1 kar do to agar koi element 0 ya less than zero ho jaye to nhi karna
    for(int i = 0 ; i < str2.size();i++){
        v[str2[i]-'a']--;
        if(v[str2[i]-'a'] < 0) cnt--;
    }
    //Jyoti ye code sahi karna hai tujhe ( You already corrected it)
    if(cnt == 0) cout<<"True"<<endl;
    else cout<<"False"<<endl;
    
}