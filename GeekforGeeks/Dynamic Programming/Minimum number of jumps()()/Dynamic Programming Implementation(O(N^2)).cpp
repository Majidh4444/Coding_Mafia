#include <bits/stdc++.h>
using namespace std;
 
 int minJumps(int arr[], int n){
     vector<int> Dp(n,-1);
     Dp[0] = 0;
     for(int i=0;i<n;i++){
         int j=i+1;
         if(Dp[i] == -1) continue;
         while(j<=i+arr[i] && j<n){
             if(Dp[j] == -1) Dp[j] = Dp[i]+1;
             Dp[j] = min(Dp[j],Dp[i]+1);
             j++;
         }
     }
     return Dp[n-1];
 }

int main(){
    int arr[] = { 1, 3, 6, 3, 2, 3, 6, 8, 9, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum number of jumps to reach the end is " << minJumps(arr, n);
    return 0;
}




