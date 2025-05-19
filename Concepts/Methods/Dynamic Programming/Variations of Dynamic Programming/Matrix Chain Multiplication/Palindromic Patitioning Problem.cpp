#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

    int isPalindrome(string S, int l, int r){
        while(l<r){
            if(S[l] != S[r]) return 0;
            l++;r--;
        }
        return 1;
    }


    int dP(string S, int** DP, int l, int r){
        if(l>=r) return 0;
        
        if(isPalindrome(S,l,r)) return 0;
        
        if(DP[l][r] != -1) return DP[l][r];
        
        DP[l][r] = INT_MAX;
        
        int left,right,temp;
        
        for(int i=l;i<r;i++){
            if(DP[l][i] != -1) left = DP[l][i];
            else{
                left = dP(S,DP,l,i);
                DP[l][i] = left;
            }
            if(DP[i+1][r] != -1) right = DP[i+1][r];
            else{
                right = dP(S,DP,i+1,r);
                DP[i+1][r] = right;
            }
            temp  = 1+left+right;
            DP[l][r] = min(DP[l][r],temp); 
        }
        return DP[l][r];
    }
    


    int palindromicPartition(string str){
        int N = str.size();
        
        int** DP = new int*[N+1];
        
        for(int i=0;i<N;i++){
            DP[i] = new int[N+1];
        }
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++) DP[i][j] = -1;
        }
        
        return dP(str,DP,0,N-1);
    }
};

int main(){
    string str;
    cin>>str;
    
    Solution ob;
    cout<<ob.palindromicPartition(str);
    
    return 0;
}