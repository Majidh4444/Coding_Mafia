#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    long long int count( int S[], int m, int n ){
        vector<vector<long long int>> DP(m+1,vector<long long int>(n+1,0));
        
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(j == 0) DP[i][j] = 1;
                else if(i == 0) DP[i][j] = 0;
                else if(j >= S[i-1]) DP[i][j] = DP[i-1][j] + DP[i][j-S[i-1]];
                else DP[i][j] = DP[i-1][j];
            }
        }
        
        return DP[m][n];
    }
};

int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++)
        cin>>arr[i];
    Solution ob;
    cout<<ob.count(arr,m,n);
	
    return 0;
}