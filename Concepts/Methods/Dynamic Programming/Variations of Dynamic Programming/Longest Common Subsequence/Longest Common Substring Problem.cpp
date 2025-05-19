#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:    
    int longestCommonSubstr (string S1, string S2, int n, int m){
        vector<vector<int>> DP(n+1,vector<int>(m+1,0));
        int maX = INT_MIN;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0) DP[i][j] = 0;
                else if(S1[i-1] == S2[j-1]) DP[i][j] = 1+DP[i-1][j-1];
                else DP[i][j] = 0;
                if(DP[i][j] >= maX) maX = DP[i][j];
            }
        }
        return maX;
    }
};

int main(){
    int n, m; cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;
 
    Solution ob;
    cout << ob.longestCommonSubstr (s1, s2, n, m);
}