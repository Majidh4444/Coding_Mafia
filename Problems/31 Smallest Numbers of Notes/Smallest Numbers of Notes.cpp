#include <iostream>
using namespace std;

int notes(int n){
    if(n==1)return 1;
    if(2<=n && n<5)return 2;
    if(5<=n && n<10)return 5;
    if(10<=n && n<50)return 10;
    if(50<=n && n<100)return 50;
    if(100<=n)return 100;
}

int main() {
	int T,n,ans;
	cin>>T;
	while(T--){
	    cin>>n;
	    ans=0;
	    while(n!=0){
	        ans+=1;
	        n=n-(notes(n));
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

