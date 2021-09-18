#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

class Solution{
    public:
    //Function to find the length of longest common subsequence in two strings.
    
    //Recursion by Brute-Force algorithm
    // int lcs(int x, int y, string s1, string s2){
    //     if(x==0 || y==0) return 0;
    //     else if(s1[x-1] == s2[y-1]) return (1+lcs(x-1,y-1,s1,s2));
    //     else return max(lcs(x-1,y,s1,s2),lcs(x,y-1,s1,s2));
    // }
    
    //Memoization Technique
    // int lcsDP(int x, int y, string s1, string s2, vector<vector<int>>& DP){
    //     if(DP[x][y] != -1) return DP[x][y];
    //     else if(x==0 || y==0) DP[x][y] = 0;
    //     else if(s1[x-1] == s2[y-1]) DP[x][y] = 1+lcsDP(x-1,y-1,s1,s2,DP);
    //     else DP[x][y] = max(lcsDP(x,y-1,s1,s2,DP),lcsDP(x-1,y,s1,s2,DP));
    //     return DP[x][y];
    // }
    
    // int lcs(int x, int y, string s1, string s2){
    //     vector<vector<int>> DP(x+1,vector<int>(y+1,-1));
    //     return lcsDP(x,y,s1,s2,DP);
    // }
    
    //Top - Bottom Approach
    int lcs(int x, int y, string s1, string s2){
        vector<vector<int>> DP(x+1,vector<int>(y+1,0));
        
        for(int i=0;i<=x;i++){
            for(int j=0;j<=y;j++){
                if(i==0 || j==0) DP[i][j] = 0;
                else if(s1[i-1] == s2[j-1]) DP[i][j] = 1+DP[i-1][j-1];
                else DP[i][j] = max(DP[i-1][j],DP[i][j-1]);
            }
        }
        
        // for(int i=0;i<=x;i++){
        //     for(int j=0;j<=y;j++){
        //         cout<<DP[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        //6 6
        //ABCDGH
        //AEDFHR
        // 0 0 0 0 0 0 0 
        // 0 1 1 1 1 1 1 
        // 0 1 1 1 1 1 1 
        // 0 1 1 1 1 1 1 
        // 0 1 1 2 2 2 2 
        // 0 1 1 2 2 2 2 
        // 0 1 1 2 2 3 3 
        return DP[x][y];
    }
    
};


int main(){
    int x,y;
    cin>>x>>y;          // Take size of both the strings as input
    string s1,s2;
    cin>>s1>>s2;        // Take both the string as input
    Solution ob;
    cout << ob.lcs(x, y, s1, s2);
    return 0;
}