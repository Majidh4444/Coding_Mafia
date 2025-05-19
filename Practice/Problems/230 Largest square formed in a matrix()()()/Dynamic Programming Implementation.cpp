#include <bits/stdc++.h>
using namespace std;
 
int maxSquare(int n, int m, vector<vector<int>> mat){
    int Dp[n][m];
    int maxSize = 0;
    for(int i=0;i<n;i++) Dp[i][0] = mat[i][0];
    for(int i=0;i<m;i++) Dp[0][i] = mat[0][i];
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(mat[i][j] == 1){
                Dp[i][j] = min(min(Dp[i-1][j],Dp[i][j-1]), Dp[i-1][j-1])+1;
            }else Dp[i][j] = 0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) if(maxSize<Dp[i][j]) maxSize = Dp[i][j];
    }
    return maxSize;
}

int main(){
	int R=6,C=5;
    vector<vector<int>> M = {{0, 1, 1, 0, 1},
                    		{1, 1, 0, 1, 0},
                    		{0, 1, 1, 1, 0},
                    		{1, 1, 1, 1, 0},
                    		{1, 1, 1, 1, 1},
                    		{0, 0, 0, 0, 0}};  
    cout<<maxSquare(R,C,M);
}




