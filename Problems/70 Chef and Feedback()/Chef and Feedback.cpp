#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int T,l,a,b;
	cin>>T;
	string S;
	while(T--){
	    cin>>S;
	    int a=S.find("101",0,3);
	    int b=S.find("010",0,3);
	    if(a>=0 || b>=0) cout<<"Good"<<endl;
	    else cout<<"Bad"<<endl;
	}
	return 0;
}

