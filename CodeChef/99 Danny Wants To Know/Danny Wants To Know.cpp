#include <iostream>
using namespace std;

int main() {
	long long int n,q;
	cin>>n>>q;
	long long int a[n],b[n];
	for(long long int i=1;i<=n;i++)	cin>>a[i];
	for(long long int i=1;i<=n;i++) cin>>b[i];
	while(q--){
	    long long int l,r,s=0;
	    cin>>l>>r;
	    for(int i=l;i<=r;i++) s=s+(a[i]*b[i]);
	    cout<<s<<endl;
	}
	return 0;
}

