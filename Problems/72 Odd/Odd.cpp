#include <iostream>
using namespace std;

int main() {
	int T,n,ans;
	cin>>T;
	while(T--){
	    cin>>n;
	    ans=1;
	    while(ans*2<=n){
	        ans=ans*2;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

