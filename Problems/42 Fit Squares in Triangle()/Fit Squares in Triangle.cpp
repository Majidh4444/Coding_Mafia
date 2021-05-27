#include <iostream>
using namespace std;

int main(void) {
	int T,n;
	cin>>T;
	while(T--){
	    cin>>n;
	    n = (n-2)/2;
	    cout<<(n*(n+1))/2<<endl;
	}
	return 0;
}

