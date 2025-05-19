#include <iostream>
#include <string>
using namespace std;

int main() {
	long long int T,N,total,rest,a;
	string S;
	char C;
	cin>>T;
	while(T--){
	    a=0;
	    rest=0;
	    cin>>N;
	    cin>>S>>C;
	    total = (N*(N+1))/2;
	    for(int i=0;i<N;i++){
	        if(S[i] != C){
	            a++;
	        }else{
	            rest = rest + (a*(a+1))/2;
	            a=0;
	        }
	    }
	    rest = rest + (a*(a+1))/2;
	    cout<<(total-rest)<<endl;
	}
	return 0;
}

