#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T,a,b,c;
	cin>>T;
	while(T--){
	    cin>>a>>b>>c;
	    if(a+b+c==180)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
