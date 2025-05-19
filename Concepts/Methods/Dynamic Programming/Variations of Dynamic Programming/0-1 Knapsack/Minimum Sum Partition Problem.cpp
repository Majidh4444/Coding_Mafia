#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
	int minDifference(int arr[], int N)  { 
	    int sum=0;
	    for(int i=0;i<N;i++) sum+=arr[i];
	    
	    int Dp[N+1][sum+1];
	    
	    for(int n=0;n<=N;n++){
	        for(int s=0;s<=sum;s++){
	            if(s==0) Dp[n][s] = 1;
	            else if(n==0) Dp[n][s] = 0;
	            else if(s>=arr[n-1]){
	                Dp[n][s] = Dp[n-1][s-arr[n-1]] || Dp[n-1][s];
	            }else{
	                Dp[n][s] = Dp[n-1][s];
	            }
	        }
	    }

	    int mn = INT_MAX;
	    for(int s=0;s<=sum/2;s++){
	        if(Dp[N][s] == 1) mn = min(mn,(sum-(2*s)));
	    }
	    
	    return mn;   
	} 
};


int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
    	cin >> a[i];

   

    Solution ob;
    cout << ob.minDifference(a, n);
    return 0;
}

//INPUT:
//5
//20 19 18 20 16
//OUTPUT:
//13
