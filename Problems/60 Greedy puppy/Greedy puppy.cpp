#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int T,N,K,max;
	cin>>T;
	while(T--){
	    cin>>N>>K;
	    max=0;
	    for(int i=1;i<=K;i++){
	        if((N%i)>max){
	            max = (N%i);
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}

