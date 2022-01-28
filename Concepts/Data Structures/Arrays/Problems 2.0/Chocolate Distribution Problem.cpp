#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(),a.end());
        //* Finding min difference in first m elements
        long long ans=a[m-1]-a[0];
        long long i=0,j=m-1;
        //* then finding min diffrence in next set of m elements
        while(j<n){
            ans=min(ans,a[j]-a[i]);
            i++;j++;
        }
        return ans;
    }   
};

int main(){
    long long n;
    cin>>n;
    vector<long long> a;
    long long x;

    for(long long i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    
    long long m;
    cin>>m;

    Solution ob;
    cout<<ob.findMinDiff(a,n,m);
	return 0;
}