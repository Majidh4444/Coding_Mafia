#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	cout<<"Enter A and B Sr=trings:"<<endl;
	string A,B;
	    cin>>A>>B;
	    sort(A.begin(),A.end());
	    sort(B.begin(),B.end());
	    (A==B)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	return 0;
}

