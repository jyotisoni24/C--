#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int kthGrammar(int n, int k) {
        int mid = pow(2 , n-1)/2; //finding mid , which is if(n==4) length will be 8 = 2^3 and the mid will be ^2^3/2
        if(n == 1 || k == 1) return 0;
        if(k <= mid) return kthGrammar(n-1 , k); // because if k <= mid both row will be same till mid
        else return !kthGrammar(n-1 , k-mid); // else we map the k with the mid + 1 and it will be conjugate of it
    }
};

int main() {
    int n = 4, k = 5;
    Solution ob;
    cout << ob.kthGrammar(n, k) << endl;
    return 0;
}