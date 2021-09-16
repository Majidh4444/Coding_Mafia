#include<bits/stdc++.h>
using namespace std;

int maxProfit(int price[], int N){
    vector<int> DP(N+1,0);
    
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            DP[i] = max(DP[i], DP[i-j]+price[j-1]);
        }
    }
    return DP[N];
}


int main(){
    int price [] = {1, 5, 8, 9};
    int N = 4;
    cout<<maxProfit(price,N)<<endl;
	return 0;
}