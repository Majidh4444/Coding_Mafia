#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,n;
	cin>>T;
	while(T--){
	    cin>>n;
	    vector<int> v;
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        v.push_back(temp);
	    }
	    sort(v.begin(),v.end());
	    int p = (n%2==0)?(n/2)-1:(n/2);
	    for(int i=0;i<=p;i++){
	        cout<<v[i]<<" ";
	        if(n%2==0 || p!=i) cout<<v[n-i-1]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}

