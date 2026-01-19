#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int count = 0;
    void solve(int n, int from, int to, int aux) {
        if(n==0) return; //if no disk return
        solve(n-1 , from , aux , to); //move n-1 disks from "from" to "aux"
        cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl; //printing that move
        count++; //that move in which the last disk is moved from "from" to "to"
        solve(n-1 , aux , to , from); //move n-1 disks from "aux" to "to"
    }

    int towerOfHanoi(int n, int from, int to, int aux) {
        count = 0;
        solve(n , from , to , aux );
        return count;---
    }
};
int main() {
    int n = 4; // Number of disks
    Solution ob;
    int moves = ob.towerOfHanoi(n, 1, 3, 2);
    cout << "Total moves: " << moves << endl;
    return 0;
}