 
// Include necessary headers
#include <iostream>

// Namespace declaration (if needed)
using namespace std;

// Function declarations (if any)
class Solution {
    public:
        double myPow(double x, long long n) {
            if(n == 0) return 1;
            if (n < 0) {//this is very important, if n is negative then we have to take reciprocal of x and make n positive
                x = 1 / x;  
                n = -n;     
            }
            if(n == 1) return x;
            if( n== -1) return 1/x;
            if(n%2 == 0) return myPow(x*x, n/2);
            else return  (x * myPow(x*x , n/2));
        }
};