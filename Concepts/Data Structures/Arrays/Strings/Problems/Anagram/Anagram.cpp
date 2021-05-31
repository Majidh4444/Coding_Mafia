#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int T;
	string A,B;
	cin>>T;
	while(T--){
	    cin>>A>>B;
	    sort(A.begin(),A.end());
	    sort(B.begin(),B.end());
	    (A==B)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}

