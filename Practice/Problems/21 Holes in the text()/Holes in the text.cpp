#include <iostream>
#include <bits/stdc++.h>
#include <map>
#include <string>

using namespace std;

int main() {
    map<char, int> H;
    H['A'] = 1;
    H['B'] = 2;
    H['D'] = 1;
    H['P'] = 1;
    H['Q'] = 1;
    H['R'] = 1;
    H['O'] = 1;
    
	int T;
	cin>>T;
	while(T--){
	    string Text;
	    cin>>Text;
	    int ans = 0; 
	    for(auto c:Text){
	        ans+=H[c];
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

