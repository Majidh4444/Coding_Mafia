#include <iostream>
using namespace std;

int isPowerOf2(int n){
    int e=0;
    while(n!=1){
        if(n%2!=0) return 0;
        e++;
        n=n/2;
    }
    return e;
}

int main() {
	int T,a,b,ans;
	cin>>T;
	while(T--){
	    ans=0;
	    cin>>a>>b;
	    while(isPowerOf2(a)==0 && a!=1){
	        a=a/2;
	        ans++;
	    }
	    int p = isPowerOf2(a);
	    int m = isPowerOf2(b);
	    ans = (p>m)?(ans+(p-m)):(ans+(m-p));
	    cout<<ans<<endl;
	}
	return 0;
}

