#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	double a,b;
	cin>>T;
	while(T--){
	    cin>>a>>b;
	    double amt = a*b;
	    if(a>1000) amt=amt-(amt/10);
	    cout<<fixed<<setprecision(6)<<amt<<endl;
	}
	return 0;
}

