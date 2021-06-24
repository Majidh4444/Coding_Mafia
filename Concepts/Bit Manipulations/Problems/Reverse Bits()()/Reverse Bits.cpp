#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    long long reversedBits(long long X) {
        long long int a = 0;
        int c = 32;
        while(X){
            a<<=1;
            a |= (X&1);
            X>>=1;
            c--;
        }
        a<<=c;
        return a;
    }
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
