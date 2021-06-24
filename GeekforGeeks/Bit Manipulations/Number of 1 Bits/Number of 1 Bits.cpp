#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int setBits(int N) {
        int c = 0;
        while(N){
            if(N&1 == 1) c++;
            N>>=1;
        }
        return c;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

