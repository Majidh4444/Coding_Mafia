#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <cmath>
using namespace std;

int main() {
	int T;
	float B,LS,min,max;
	cin>>T;
	while(T--){
	    cin>>B>>LS;
	    min = sqrt((LS*LS)-(B*B));
	    max = sqrt((LS*LS)+(B*B));
	    cout<<fixed<<setprecision(5)<<min<<" ";
	    cout<<fixed<<setprecision(5)<<max<<endl;
	}
	return 0;
}

