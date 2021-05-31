#include <iostream>
using namespace std;

int main() {
	int T,n,ans,k;
	cin>>T;
	while(T--){
	    cin>>n;
	    ans=0;
	    for(int i=1;i<=n;i++){
	        cin>>k;
	        ans=ans+(k/i);
	    }
	    (ans%2!=0)?cout<<"ALICE"<<endl:cout<<"BOB"<<endl;
	}
	return 0;
}

