#include <iostream>
#include<bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
	int T;
	float n,ans;
	cin>>T;
	while(T--){
	    cin>>n;
	    if(n<1500) ans = 2*n;
	    else ans = n+500+((n*98)/100);
	    cout<<fixed<<setprecision(2)<<ans<<endl;
	}
	return 0;
}

