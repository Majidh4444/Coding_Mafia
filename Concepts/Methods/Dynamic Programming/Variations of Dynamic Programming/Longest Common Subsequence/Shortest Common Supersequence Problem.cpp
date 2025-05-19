#include<bits/stdc++.h>
using namespace std;

//For length of shortest common supersequence we have to know how it forms
//efgh, jghi
//we get shortest common supersequence as "ejfghi" in which "gh" is longest common subsequence
//and other rather than "gh" have to be in shortest common supersequence
//So for length of shortest common supersequence we have to remove length of longest common subsequence from 
//sum of length for both the strings

class Solution{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string s1, string s2, int x, int y){
        vector<vector<int>> DP(x+1,vector<int>(y+1,0));
        
        for(int i=0;i<=x;i++){
            for(int j=0;j<=y;j++){
                if(i==0 || j==0) DP[i][j] = 0;
                else if(s1[i-1] == s2[j-1]) DP[i][j] = 1+DP[i-1][j-1];
                else DP[i][j] = max(DP[i-1][j],DP[i][j-1]);
            }
        }
        return (x+y-DP[x][y]);
    }
};

int main(){   
    string X, Y;
	cin >> X >> Y;
	
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size());
	return 0;
}