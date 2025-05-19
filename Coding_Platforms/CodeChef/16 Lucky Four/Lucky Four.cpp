#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int ans = 0;
	    while(n>0){
	        if(n%10 == 4){
	            ans=ans+1;
	        }
	        n=n/10;
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}

