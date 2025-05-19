#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int T,ans,c;
	string S;
	cin>>T;
	while(T--){
	    cin>>S;
	    int l = S.length();
	    sort(S.begin(),S.end());
	    ans=0;
	    c=1;
	    for(int i=0;i<S.length();i++){
	        if(S[i]==S[i+1]){
	            c++;
	        }else{
	            ans = (c%2==0)?(ans+(c/2)):(ans+(c/2)+1);
	            c=1;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

