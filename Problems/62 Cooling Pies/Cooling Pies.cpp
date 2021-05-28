#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T,n,ans;
	cin>>T;
	while(T--){
	    cin>>n;
	    ans=0;
	    int a[n],b[n];
	    int c[n] = {0};
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    sort(b,b+n);
	    sort(a,a+n);
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            if(a[i]<=b[j] && c[j]==0){
	                ans++;
	                c[j]=1;
	                break;
	            }
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

