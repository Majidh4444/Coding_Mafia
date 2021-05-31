#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
	int T,n;
	string S;
	char C;
	cin>>T;
	while(T--){
	    map<string, int> m;
	    cin>>n;
	    while(n--){
	        cin>>S>>C;
    	    int i = (C == '+')?1:-1;
    	    auto it = m.find(S);
	    	if(it==m.end()){
				m.insert(pair<string,int>(S,i));	
			}
    	    else m[S] = i;
	    }
	    int ans=0;
	    for(auto it= m.begin();it!=m.end();++it){
	        ans+=(it->second);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
