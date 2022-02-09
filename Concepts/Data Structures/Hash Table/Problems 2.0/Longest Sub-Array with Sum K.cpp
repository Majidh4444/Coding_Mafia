#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int k) { 
        // int i = 0;
        // int j = N-1;
        // int sum = 0;
        
        // for(int i=0;i<N;i++) sum += A[i];
        
        // while(i<j){
        //     if(sum == k) return j-i+1;
        //     else if(sum > k){
        //         if(A[i] > A[j]){
        //             i++;
        //             sum -= A[i];
        //         }else{
        //             j--;
        //             sum -= A[j];
        //         }
        //     }
        // }
        // return 0;
        
        unordered_map<int,int> m;
        
        int sum = 0, l = 0;
        m[sum] = 0;
        for(int i=0;i<N;i++){
            sum += A[i];
            
            if(m.find(sum-k) != m.end()){
                l = max(l, i-m[sum-k]+1);
            }
            
            if(m.find(sum) == m.end()) m[sum] = i+1;
        }
        
        return l;
    } 
};


int main(){
	int n, k;
	cin>> n >> k;
	int a[n];
	    
	for(int i=0;i<n;i++) cin>>a[i];
	Solution ob;
	cout << ob.lenOfLongSubarr(a, n , k);
	
	return 0;
}