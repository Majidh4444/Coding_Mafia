#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	int perfectSum(int arr[], int N, int sum){
	    vector<vector<int>> DP(N+1,vector<int>(sum+1,0));

        for(int n=0;n<=N;n++){
            for(int s=0;s<=sum;s++){
                if(s == 0) DP[n][0] = 1;
                else if(n == 0) DP[0][s] = 0;
                else if(s>=arr[n-1]) DP[n][s] = (DP[n-1][s-arr[n-1]] + DP[n-1][s])%1000000007;
                else DP[n][s] = DP[n-1][s];
            }
        }
        // cout<<"s-";
        // for(int s=0;s<=sum;s++) cout<<s<<" ";
        // cout<<endl;
        // for(int n=0;n<=N;n++){
        //     cout<<n<<"-";
        //     for(int s=0;s<=sum;s++) cout<<DP[n][s]<<" ";
        //     cout<<endl;
        // }
        return DP[N][sum];
	}
	  
};

int main(){
    int n, sum;

    cin >> n >> sum;

    int a[n];
    for(int i = 0; i < n; i++)
    	cin >> a[i];

   

    Solution ob;
    cout << ob.perfectSum(a, n, sum);
    return 0;
}


//INPUT:
//6 10
//2 3 5 6 8 10
//OUTPUT:
//3
