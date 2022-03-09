// Check the bits which have 1 and increment x *= x
// then when bit is 1 ans = ans*x or ans = ans/x

class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        double ans = 1;
        while(n){
            if(n%2!=0) (n>0)?ans=ans*x:ans=ans/x;
            x *= x;
            n /=2;
        }
        return ans;
    }
};