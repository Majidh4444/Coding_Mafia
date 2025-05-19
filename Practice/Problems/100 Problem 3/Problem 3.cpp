#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int T,l,m;
	string A,B;
	cin>>T;
	while(T--){
	    cin>>A>>B;
	    l = B.length();
	    auto f = A.find(B);
	    (f>=A.length())?cout<<"0"<<endl:cout<<"1"<<endl;
	}
	return 0;
}

