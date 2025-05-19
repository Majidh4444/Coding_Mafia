#include <bits/stdc++.h>
using namespace std;

//heap, pea
//LCS => ea
// heap         pea
//   \          /   
//    \del=2   /ins=1 => (m-length of LCS)+(n-length of LCS) = Minimum number of insertions and deletions
//      --ea--                  |                |
//                          deletions        insertions


class Solution{
	public:
	int minOperations(string str1, string str2){
	    int m = str1.size();
	    int n = str2.size();
	    vector<vector<int>> DP(m+1,vector<int>(n+1,0));
	    
	    for(int i=0;i<=m;i++){
	        for(int j=0;j<=n;j++){
	            if(i==0 || j==0) DP[i][j] = 0;
	            else if(str1[i-1] == str2[j-1]) DP[i][j] = 1+DP[i-1][j-1];
	            else DP[i][j] = max(DP[i-1][j],DP[i][j-1]);
	        }
	    }
	    
	    return (m-DP[m][n])+(n-DP[m][n]);
	} 
};

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    Solution ob;
    cout << ob.minOperations(s1, s2);
    return 0;
}