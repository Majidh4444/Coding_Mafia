#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	int minCoins(int coins[], int M, int V) { 
        vector<vector<int>> DP(M+1,vector<int>(V+1,-1));
        
        for(int i=0;i<=M;i++){
            for(int j=0;j<=V;j++){
                if(j == 0) DP[i][j] = 0;
                else if(i == 0) DP[i][j] = INT_MAX-1;
                else if(j >= coins[i-1]) DP[i][j] = min(DP[i-1][j], 1+DP[i][j-coins[i-1]]);
                else DP[i][j] = DP[i-1][j];
            }
        }
        // for(int i=0;i<=M;i++){
        //     for(int j=0;j<=V;j++){
        //         cout<<DP[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        if(DP[M][V] == INT_MAX-1) return -1;
        return DP[M][V];
	} 
	  
};

int main() {
    int v, m;
    cin >> v >> m;

    int coins[m];
    for(int i = 0; i < m; i++) cin >> coins[i];
    
    Solution ob;
    cout << ob.minCoins(coins, m, v);
    return 0;
}
