 # include <bits/stdc++.h>
using namespace std;
int cnt = 0 ;
void f(string s){
   if(cnt == 5) return;
   cout<<s<<endl;
   cnt++;
   f(s);
}
int main(){
    f("Jyoti Soni");
}