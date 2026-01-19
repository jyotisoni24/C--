#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double myPow(double x, long long n) { //using long long to avoid overflow
        //First option
        if(n == 0) return 1;
        if(n < 0){ //if n is negative
            x = 1/x; //invert x
            n = -n; //make n positive
        }
        if(n==1) return x;
        if(n==-1) return 1/x;

        if(n % 2 == 0) return myPow(x*x , n/2); //Even case
        return x * myPow(x*x , n/2); //Odd case

        //Second option
        // return pow(x,n);
    }
};
int main() {
    Solution sol;
    double x = -1;
    int n = 2134245673;
    cout << sol.myPow(x, n) << endl; // Output: 1024.00000
    return 0;
}