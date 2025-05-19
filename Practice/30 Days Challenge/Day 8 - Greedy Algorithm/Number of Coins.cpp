// Use DP
// first row to INT_MAX
// first column to 0
// use for for loop
// if(coins[i-1] <= j) t[i][j] = min(1 + t[i][j-coins[i-1]], t[i-1][j])
// else t[i][j] = t[i-1][j]
// return t[n][amount] if not equal to INT_MAX
// else return -1

#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	
	int minCoins(int coins[], int n, int amount){
        int t[n+1][amount+1];  

        for(int j=0; j <= amount; j++) t[0][j] = amount+1;
        for(int i=0; i <= n; i++) t[i][0] = 0;
        
        for(int i=1;i <= n;i++){
            for(int j=1;j <= amount;j++) {
                if(coins[i-1] <= j) t[i][j] = min(1 + t[i][j-coins[i-1]], t[i-1][j]);
                else t[i][j] = t[i-1][j];
            }
        }
        
        return t[n][amount] > amount ? -1 : t[n][amount];
	}
	  
};

int main(){
    int v, m;
    cin >> v >> m;

    int coins[m];
    for(int i = 0;i < m;i++) cin >> coins[i];

    Solution ob;
    cout << ob.minCoins(coins, m, v);
    return 0;
}