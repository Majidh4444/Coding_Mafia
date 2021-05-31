#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int A,N,K;
	cin>>A>>N>>K;
	int Chamber[K];
	for(int i=0;i<K;i++){
	    Chamber[i]=0;
	}
	while(A--){
	    Chamber[0]++;
	    for(int j=0;j<K;j++){
	        if(Chamber[j]<=N) break;
	        Chamber[j]=0;
	        Chamber[j+1]++;
	    }
	}
	for(int i=0;i<K;i++){
	    cout<<Chamber[i]<<" ";
	}
	return 0;
}

