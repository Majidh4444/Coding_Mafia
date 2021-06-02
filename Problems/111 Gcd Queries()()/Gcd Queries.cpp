#include <iostream>
using namespace std;

int gcd(int a, int b){
	if(a==0){
		return b;
	}else{
		return gcd(b%a,a);
	}
}

int main() {
	int T,N,Q,a,b,ans;
	cin>>T;
	while(T--){
	    cin>>N>>Q;
	    int arr[N+2];
	    int pre[N+2];
	    int post[N+2];
	    for(int i=1;i<=N;i++) cin>>arr[i];
	    pre[0] = 0;
	    post[N+1] = 0;
	    for(int i=1;i<=N;i++){
	        pre[i] = gcd(pre[i-1],arr[i]);
	    }
	    for(int i=N;i>=1;i--){
	        post[i] =  gcd(post[i+1],arr[i]);
	    }
	    while(Q--){
	       cin>>a>>b;
	       ans = gcd(pre[a-1],post[b+1]);
	       cout<<ans<<endl;
	    }
	}
	return 0;
}
