#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,n;
	cin>>T;
	while(T--){
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    for(int i=0;i<n;i++) cin>>b[i];
	    int m = *max_element(b,b+n);
	    int c[m+1];
	    for(int i=0;i<m+1;i++) c[i]=0;
	    for(int i=0;i<n;i++){
	        for(int j=a[i];j<b[i];j++){
	            c[j]++;
	        }
	    }
	    int ans = *max_element(c+1,c+m+1);
	    cout<<ans<<endl;
	}
	return 0;
}

