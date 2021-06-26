#include <bits/stdc++.h>
using namespace std;
 
int knapSack(int W, int wt[], int val[], int n) {
    int k[n+1][W+1];
    int i,w;
    for(i=0;i<=n;i++){
        for(w=0;w<=W;w++){
            if(i==0 || w==0) k[i][w] = 0;
            else if(wt[i-1] <= w) k[i][w] = max(val[i-1]+k[i-1][w-wt[i-1]] , k[i-1][w]);
            else k[i][w] = k[i-1][w];
            //cout<<"i:"<<i<<" "<<"w:"<<w<<" "<<k[i][w]<<endl;
        }
    }
    return k[i-1][w-1];
}
 

int main()
{
    int val[] = { 100, 120, 60 };
    int wt[] = { 20, 30, 10 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapSack(W, wt, val, n);
    return 0;
}
