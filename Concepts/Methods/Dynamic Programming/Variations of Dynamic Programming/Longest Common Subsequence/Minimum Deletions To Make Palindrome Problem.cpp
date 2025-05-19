//THIS QUESTION IS SAME AS MINIMUM NUMBER OF INSERTIONS TO MAKE PALINDROME

#include <bits/stdc++.h>
using namespace std;


//Minimum Deletions = lenght of String - Length of longest Palindrome Subsequence of that String


class Solution{
  public:
    int minimumNumberOfDeletions(string S) {
        string R = S;
        reverse(R.begin(),R.end());
        int l = S.size();
        vector<vector<int>> DP(l+1,vector<int>(l+1,0));
	    
	    for(int i=0;i<=l;i++){
	        for(int j=0;j<=l;j++){
	            if(i==0 || j==0) DP[i][j] = 0;
	            else if(S[i-1] == R[j-1]) DP[i][j] = 1+DP[i-1][j-1];
	            else DP[i][j] = max(DP[i-1][j],DP[i][j-1]);
	        }
	    }	    
	    return l-DP[l][l];
    } 
};

int main(){
    string S;
    cin >> S;
    Solution obj;
    cout << obj.minimumNumberOfDeletions(S);
    return 0;
}