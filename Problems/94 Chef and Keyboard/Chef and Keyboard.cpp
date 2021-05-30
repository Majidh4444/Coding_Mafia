#include <iostream>
using namespace std;

int main() {
	int T,n,m,c,ans;
	cin>>T;
	while(T--){
	    cin>>n>>m>>c;
	    ans=0;
	    for(int i=1;i<=n;i++){
	        if((c%i)==0 && (c/i)<=m) ans++;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
