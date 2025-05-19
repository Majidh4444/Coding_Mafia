#include <iostream>
using namespace std;

long long int nCr(int n, int k){
    if(k>0){
        return (n*(nCr(n-1,k-1)))/k;
    }else{
        return 1;
    }
}

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n,k;
	    cin>>n>>k;
	    n=n-1;k=k-1;
	    long long int ans = nCr(n,k);
	    cout<<ans<<endl;
	}
	return 0;
}

