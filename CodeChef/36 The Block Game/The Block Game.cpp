#include <iostream>
using namespace std;

int main() {
	int T,n,ans,c;
	cin>>T;
	while(T--){
	    cin>>n;
	    c=n;
	    ans = 0;
	    while(n!=0){
	        ans= ans*10+(n%10);
	        n=n/10;
	    }
	    if(ans==c) cout<<"wins"<<endl;
	    else cout<<"loses"<<endl;
	}
	return 0;
}

