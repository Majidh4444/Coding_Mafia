#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int equalPartition(int N, int arr[]){
        int sum = 0;
        for(int i=0;i<N;i++) sum += arr[i];
        if(sum%2 == 1) return 0;
        sum = sum/2;
        vector<vector<int>> DP(N+1,vector<int>(sum+1,0));
        for(int n=0;n<=N;n++){
            for(int s=0;s<=sum;s++){
                if(s==0) DP[n][s] = 1;
                else if(n==0) DP[n][s] = 0;
                else if(s >= arr[n-1]) DP[n][s] = ((DP[n-1][s-arr[n-1]]) || (DP[n-1][s]));
                else DP[n][s] = DP[n-1][s];
            }
        }
        return DP[N][sum];
    }
};

int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i = 0;i < N;i++)
        cin>>arr[i];
    
    Solution ob;
    if(ob.equalPartition(N, arr))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

//INPUT:
//4
//1 5 11 5
//OUTPUT:
//YES
