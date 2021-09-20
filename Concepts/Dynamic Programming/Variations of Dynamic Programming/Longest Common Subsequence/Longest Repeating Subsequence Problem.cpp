#include<bits/stdc++.h>
using namespace std;


//https://www.youtube.com/watch?v=hbTaCmQGqLg&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=30 => Explanantion Video


class Solution {
	public:
		int LongestRepeatingSubsequence(string s1){		    
		    vector<vector<int>> DP(s1.size()+1,vector<int>(s1.size()+1,0));
        
            for(int i=0;i<=s1.size();i++){
                for(int j=0;j<=s1.size();j++){
                    if(i==0 || j==0) DP[i][j] = 0;
                    else if(s1[i-1] == s1[j-1] && i!=j) DP[i][j] = 1+DP[i-1][j-1];
                    else DP[i][j] = max(DP[i-1][j],DP[i][j-1]);
                }
            }
            
            return DP[s1.size()][s1.size()];
		}

};

int main(){
    string str;
    cin >> str;
    Solution obj;
    int ans = obj.LongestRepeatingSubsequence(str);
    cout << ans;
    return 0;
}