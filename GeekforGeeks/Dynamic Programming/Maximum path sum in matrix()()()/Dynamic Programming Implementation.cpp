#include <bits/stdc++.h>
using namespace std;
 



int maximumPath(int N, vector<vector<int>> M){
	vector<int> v(N,-1);
	vector<vector<int>> Dp(N,v);
	int i,j;
	for(int i= 0;i<N;i++) Dp[0][i]=M[0][i];
	
	for(i=0;i<N-1;i++){
		for(j=0;j<N;j++){
			if(j-1 >= 0) Dp[i+1][j-1] = max(Dp[i][j]+M[i+1][j-1], Dp[i+1][j-1]);
			Dp[i+1][j] = max(Dp[i][j]+M[i+1][j], Dp[i+1][j]);
			if(j+1 < N) Dp[i+1][j+1] = max(Dp[i][j]+M[i+1][j+1], Dp[i+1][j+1]);
		}
	}
	int max=INT_MIN;
	for(int i= 0;i<N;i++){
		//cout<<Dp[N-1][i]<<" ";
		if(max<Dp[N-1][i]) max = Dp[N-1][i];
	} 
	//cout<<endl;
	return max;
}
 

int main()
{
    vector<vector<int>> cost =  {{348, 391},
          						{618, 193}};
    
    cout << maximumPath(2, cost);
    return 0;
}



//int** Dp;
//Dp = new int*[N+1];
//for(int i=0;i<N;i++){
//	Dp[i] = new int[N+1];
//    for(int j=0;j<N;j++){
//        Dp[i][j] = -1;
//    }
//}
