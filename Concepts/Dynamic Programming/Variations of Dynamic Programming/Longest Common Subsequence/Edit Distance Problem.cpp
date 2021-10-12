#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int editDistance(string s, string t) {
        vector<vector<int>> DP(s.size()+1,vector<int>(t.size()+1,0));
        
        for(int i=0;i<=s.size();i++){
            for(int j=0;j<=t.size();j++){
                if(i==0) DP[i][j] = j;
                else if(j==0) DP[i][j] = i;
                else if(s[i-1] == t[j-1]) DP[i][j] = DP[i-1][j-1];
                else DP[i][j] = 1+min(DP[i-1][j],min(DP[i][j-1],DP[i-1][j-1]));
            }
        }
        
        return DP[s.size()][t.size()];
    }
};

int main() {
    string s, t;
    cin >> s >> t;
    Solution ob;
    int ans = ob.editDistance(s, t);
    cout<<ans;
    return 0;
}