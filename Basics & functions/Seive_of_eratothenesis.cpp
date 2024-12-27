 #include <iostream>
 #include <vector>
 #include <cstring>
  using namespace std;
 vector<int> sieveOfEratosthenes(int N){
        bool prime[N+1];
        memset(prime, true, sizeof(prime));
        for(int p = 2 ; p*p <= N ; p++){
            if(prime[p] == true){
                for(int i = p*p ; i <= N ; i +=p){
                    prime[i] = false;
                }   
            }
        }
        vector<int> ans;
        for(int i = 2 ; i <= N ; i++){
            if(prime[i]) 
                ans.push_back(i);
        }
        return ans;
}
 void Print(vector<int> &ans){
	for (int p=0; p< ans.size(); p++) {
	    cout << ans[p] << " "; 
    }
}
int main(){
    int x = 30;
    vector<int> ans = sieveOfEratosthenes(x);
    Print(ans);
    return 0;
}
