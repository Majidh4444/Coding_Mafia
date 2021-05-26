#include <iostream>
using namespace std;

int squares(int n){
    if(n==1)return 1;
    if(2<=n && n<4)return 2;
    if(4<=n && n<8)return 4;
    if(8<=n && n<16)return 8;
    if(16<=n && n<32)return 16;
    if(32<=n && n<64)return 32;
    if(64<=n && n<128)return 64;
    if(128<=n && n<256)return 128;
    if(256<=n && n<512)return 256;
    if(512<=n && n<1024)return 512;
    if(1024<=n && n<2048)return 1024;
    if(2048<=n)return 2048;
}

int main() {
	int T,n,ans;
	cin>>T;
	while(T--){
	    cin>>n;
	    ans=0;
	    while(n!=0){
	        ans+=1;
	        n=n-(squares(n));
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

