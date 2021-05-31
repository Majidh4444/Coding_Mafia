#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T=10,temp,m;
	while(T--){
	    vector<int> v;
	    for(int i=0;i<10;i++){
	        cin>>temp;
	        m=temp%42;
	       // vector<int>::iterator f = find(v.begin(),v.end(),m);
	        auto f = find(v.begin(),v.end(),m); //best way than above one
	        if(f==v.end()){
	            v.push_back(m);
	        }
	    }
	    cout<<v.size()<<endl;
	}
	return 0;
}

