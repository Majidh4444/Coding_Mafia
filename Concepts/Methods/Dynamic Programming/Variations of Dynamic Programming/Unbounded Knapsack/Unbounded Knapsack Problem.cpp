#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[]){
        vector<vector<int>> DP(N+1,vector<int>(W+1,0));
        
        for(int n=0;n<=N;n++){
            for(int w=0;w<=W;w++){
                if(n==0 || w==0) DP[n][w] = 0;
                else if(w>=wt[n-1]) DP[n][w] = max(DP[n-1][w], val[n-1]+DP[n][w-wt[n-1]]);
                else DP[n][w] = DP[n-1][w];
            }
        }
        // cout<<"s-";
        // for(int s=0;s<=W;s++) cout<<s<<" ";
        // cout<<endl;
        // for(int n=0;n<=N;n++){
        //     cout<<n<<"-";
        //     for(int s=0;s<=W;s++) cout<<DP[n][s]<<" ";
        //     cout<<endl;
        // }
        return DP[N][W];
    }
};

int main(){
    int N, W;
    cin>>N>>W;
    int val[N], wt[N];
    for(int i = 0;i < N;i++)
        cin>>val[i];
    for(int i = 0;i < N;i++)
        cin>>wt[i];
    
    Solution ob;
    cout<<ob.knapSack(N, W, val, wt);
}

//INPUT:
//2 3
//1 1
//2 1
//OUTPUT:
//3
