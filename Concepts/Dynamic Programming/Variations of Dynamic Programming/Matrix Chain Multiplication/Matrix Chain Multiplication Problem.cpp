#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

    int dP(int N, int i, int j, int arr[], vector<vector<int>> DP){
        if(i>=j) return 0;
        if(DP[i][j] != -1) return DP[i][j];
        DP[i][j] = INT_MAX;
        for(int k=i;k<j;k++){
            int result = dP(N,i,k,arr,DP) + dP(N,k+1,j,arr,DP) + (arr[i-1]*arr[k]*arr[j]);
            if(result < DP[i][j]) DP[i][j] = result;
        }
        return DP[i][j];
    }


    int matrixMultiplication(int N, int arr[]){
        vector<vector<int>> DP(N,vector<int> (N+1,-1));
        
        for(int i=0;i<N;i++){
            DP[0][i] = -1;
            DP[i][0] = -1;
        }
        
        return dP(N,1,N-1,arr,DP);
    }
    
};

int main(){
	int N;
	cin>>N;
	int arr[N];
	for(int i = 0;i < N;i++)
		cin>>arr[i];
	
	Solution ob;
	cout<<ob.matrixMultiplication(N, arr);
    return 0;
}