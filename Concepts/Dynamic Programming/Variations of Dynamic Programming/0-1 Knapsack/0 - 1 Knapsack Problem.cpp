#include<bits/stdc++.h>
using namespace std;

//if capacity weight >= wt[i]
    //Included(1)
    //Excluded(2)
//if capacity weight < wt[i]
    //Excluded(3)

class Solution{
    public:
    
    //Recursion by Brute-Force algorithm
    // int knapSack(int W, int wt[], int val[], int N){
    //     if(N==0 || W==0) return 0;
        
    //     if(W >= wt[N-1]){
    //         return max(knapSack(W,wt,val,N-1), val[N-1]+knapSack(W-wt[N-1],wt,val,N-1));
    //     }else{
    //         return knapSack(W,wt,val,N-1);
    //     }
    // }
    
    
    
    //Memoization Technique
    // int knapSackDP(int W, int wt[], int val[], int N, vector<vector<int>> DP){
    //     if(N==0 || W==0) return 0;
        
    //     if(DP[N][W] != -1) return DP[N][W];
        
    //     if(W >= wt[N-1]){
    //         DP[N][W] = max(knapSackDP(W,wt,val,N-1,DP), val[N-1]+knapSackDP(W-wt[N-1],wt,val,N-1,DP));
    //     }else{
    //         DP[N][W] = knapSackDP(W,wt,val,N-1,DP);
    //     }
    //     return DP[N][W];
    // }
    // int knapSack(int W, int wt[], int val[], int N){
    //     vector<vector<int>> DP(N+1,vector<int>(W+1,-1));
    //     return knapSackDP(W,wt,val,N,DP);
    // }
    
    
    
    //Top - Bottom Approach
    int knapSack(int W, int wt[], int val[], int N){
        vector<vector<int>> DP(N+1,vector<int>(W+1,0));
        
        for(int n=0;n<=N;n++){
            for(int w=0;w<=W;w++){
                if(n==0 || w==0) DP[n][w] = 0;
                else if(w>=wt[n-1]) DP[n][w] = max(DP[n-1][w], val[n-1]+DP[n-1][w-wt[n-1]]);
                else DP[n][w] = DP[n-1][w];
            }
        }
        return DP[N][W];
    }
    
};

int main(){
    int n,w;
    cin>>n>>w;
    
    int val[n];
    int wt[n];
    
    for(int i=0;i<n;i++)
        cin>>val[i];
    
    for(int i=0;i<n;i++)
        cin>>wt[i];
    Solution ob;
    
    cout<<ob.knapSack(w, wt, val, n);
	return 0;
}

//INPUT:
//3
//4
//1 2 3
//4 5 1
//OUTPUT:
//3
