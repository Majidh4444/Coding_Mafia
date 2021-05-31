#include <iostream>
using namespace std;

int main() {
	int T,n,m,a,b,f;
	cin>>T;
	while(T--){
	    cin>>n>>m;
	    int arr[n+1] = {0};
	    for(int i=0;i<m;i++){
	        cin>>a>>b;
	        arr[a]=arr[b]=1;
	    }
	    f=0;
	    for(int i=1;i<=n;i++){
	        if(arr[i]==0) f++;
	    }
	    (f%2==0)?cout<<"yes"<<endl:cout<<"no"<<endl;
	}
	return 0;
}

