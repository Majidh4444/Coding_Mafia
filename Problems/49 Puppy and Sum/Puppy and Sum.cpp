#include <iostream>
using namespace std;

int main() {
	int T,D,N;
	cin>>T;
	while(T--){
	    cin>>D>>N;
	    for(int i=0;i<D;i++){
	        N = N*(N+1)/2;
	    }
	    cout<<N<<endl;
	}
	return 0;
}

