#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
	vector<long long> findMissing(long long A[], long long B[], int N, int M){ 
	    vector<long long> v;
	    
	    unordered_set<long> s;
	    
	    for(int i=0;i<M;i++) s.insert(B[i]);
	    
	    for(int i=0;i<N;i++){
	        if(s.find(A[i]) == s.end()) v.push_back(A[i]);
	    }
	    
	   return v;
	} 
};
	
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    long long a[n];
    long long b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin >> b[i];
    
    vector<long long> ans;
    Solution ob;
    ans=ob.findMissing(a,b,n,m);
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    return 0;
}