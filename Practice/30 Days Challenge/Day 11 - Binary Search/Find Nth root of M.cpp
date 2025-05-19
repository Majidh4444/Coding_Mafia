// Between 1 to m using binary search find mid^n = m condition to return

#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
	int NthRoot(int n, int m){
	    long long low = 1, high = m;
	    while(high>=low){
	        long long mid = low+(high-low)/2;
	        if(pow(mid,n) == m) return mid;
	        else if(pow(mid,n) > m) high = mid-1;
	        else low = mid+1;
	    }
	    return -1;
	}  
};

int main(){
    int n, m;
    cin >> n >> m;
    Solution ob;
    int ans = ob.NthRoot(n, m);
    cout<<ans;
	return 0;
}