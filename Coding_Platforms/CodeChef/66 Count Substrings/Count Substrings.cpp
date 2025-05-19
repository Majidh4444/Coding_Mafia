#include <iostream>
#include <string.h>
using namespace std;

long long int nCr(int n, int r){
    if(r==0) return 1;
    return (n*nCr(n-1,r-1))/r;
}

int main() {
	int T,n,l;
	string S;
	cin>>T;
	while(T--){
		cin>>l;
	    cin>>S;
	    n=0;
	    for(auto c:S){
	        if(c=='1') n++;
	    }
	    cout<<(nCr(n,2))+n<<endl;
	}
	return 0;
}

