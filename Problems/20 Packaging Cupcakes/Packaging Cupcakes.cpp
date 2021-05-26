#include <iostream>
using namespace std;

int main() {
	int T,n;
	cin>>T;
	while(T--){
	    cin>>n;
	    if(n==2){
	        cout<<n<<endl;
	    }else{
	        cout<<((n/2)+1)<<endl;
	    }
	}
	return 0;
}

