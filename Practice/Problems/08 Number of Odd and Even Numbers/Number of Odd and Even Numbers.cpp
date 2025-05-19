#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int e = 0;
	for(int i=0;i<n;i++){
	    int a;
	    cin>>a;
	    if(a%2==0){
	        e=e+1;
	    }
	}
	int o = n-e;
	int ans = (e-o)>=0?(e-o):(o-e);
	cout<<ans<<endl;
	return 0;
}

