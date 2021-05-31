#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
	int T,l;
	string S,a,b;
	cin>>T;
	while(T--){
	    cin>>S;
	    l=S.length();
	    a=S.substr(0,l/2);
	    if(l%2==0) b=S.substr((l/2),l);
	    else b=S.substr((l/2)+1,l);
	    sort(a.begin(),a.end());
	    sort(b.begin(),b.end());
	    (a==b)?(cout<<"YES"<<endl):(cout<<"NO"<<endl);
	}
	return 0;
}

