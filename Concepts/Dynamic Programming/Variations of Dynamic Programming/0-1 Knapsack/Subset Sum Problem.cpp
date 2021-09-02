#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        vector<vector<int>> DP(N+1,vector<int>(sum+1,0));
        
        for(int n=0;n<=N;n++){
            for(int s=0;s<=sum;s++){
                if(s==0) DP[n][s] = 1;
                else if(n==0) DP[n][s] = 0;
                else if(s>=arr[n-1]) DP[n][s] = DP[n-1][s-arr[n-1]] || DP[n-1][s];
                else DP[n][s] = DP[n-1][s];
            }
        }
        
        return DP[N][sum];
    }
};

int main(){ 
	int N, sum;
	cin >> N;
	int arr[N];
	for(int i = 0; i < N; i++) cin >> arr[i];
	cin >> sum;
	
	Solution ob;
	cout << ob.isSubsetSum(N, arr, sum);
    
    return 0; 
}


//INPUT:
//6
//3 34 4 12 5 2
//30
//OUTPUT:
//0
