#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findPosition(int N) {
        if((N&N-1)) return -1;
        int p = 1;
        while(N){
            if(N&1) return p;
            N>>=1;
            p++;
        }
        return -1;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
