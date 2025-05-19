#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int T,ans;
	string J,S;
	cin>>T;
	while(T--){
	    ans=0;
	    cin>>J>>S;
	    for(auto c:S){
	        for(auto d:J){
	            if(c==d){
	                ans++;
	                break;
	            }
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

