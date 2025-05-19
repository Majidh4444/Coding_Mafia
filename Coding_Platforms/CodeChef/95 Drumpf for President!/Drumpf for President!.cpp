#include <iostream>
using namespace std;

int main() {
	int T,N,K,v,ans;
	cin>>T;
	while(T--){
	    ans=0;
	    cin>>N>>K;
	    int arr[N+1];
	    for(int i=0;i<=N;i++) arr[i]=0;
	    for(int i=1;i<=N;i++){
	        cin>>v;
	        if(i==v) arr[i] = -1;
	        else if(arr[v]!=-1){
	            arr[v]++;
	        }
	    }
	    for(int i=1;i<=N;i++){
	        if(arr[i]>=K) ans++;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

