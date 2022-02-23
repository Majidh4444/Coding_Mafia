#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findPosition(int N) {
        if(N == 0 || ((N-1)&N) != 0) return -1;
        return 1+log2(N);
    }
};

int main() {
    int N;
    cin>>N;
    Solution ob;
    cout<<ob.findPosition(N);
    return 0;
}