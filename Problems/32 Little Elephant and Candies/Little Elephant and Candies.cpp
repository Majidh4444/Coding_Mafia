#include <iostream>
using namespace std;

int main() {
	int T,N,C;
	cin>>T;
	while(T--){
	    cin>>N>>C;
	    int sum=0,a;
	    for(int i=0;i<N;i++){
	        cin>>a;
	        sum+=a;
	    }
	    if(sum<=C) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}
	return 0;
}

