#include<bits/stdc++.h>
using namespace std;


//Longest Palindrome Subsequence(A) = Longest Common Subsequence(A, reverse of A)


class Solution{
  public:
    int longestPalinSubseq(string A) {
        string B = A;
        reverse(B.begin(),B.end());
        vector<vector<int>> DP(A.size()+1,vector<int>(B.size()+1,0));
        
        for(int i=0;i<=A.size();i++){
            for(int j=0;j<=B.size();j++){
                if(i==0 || j==0) DP[i][j] = 0;
                else if(A[i-1] == B[j-1]) DP[i][j] = 1+DP[i-1][j-1];
                else DP[i][j] = max(DP[i-1][j], DP[i][j-1]);
            }
        }
        return DP[A.size()][B.size()];
    }
};


int32_t main(){
    string s; cin >> s;
    Solution ob;
    cout << ob.longestPalinSubseq(s);
}