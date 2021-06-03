#include <iostream>
#include <set>
using namespace std;

int main() {
	int T,N,i,temp;
	cin>>T;
	while(T--){
	    cin>>N;
	    i=N;
	    set<int> s;
	    while(i--){
	        cin>>temp;
	        s.insert(temp);
	    }
	    if(s.size() == N) cout<<"YES"<<endl;
	    else  cout<<"NO"<<endl;
	}
	return 0;
}

