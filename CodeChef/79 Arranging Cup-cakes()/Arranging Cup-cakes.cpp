#include <iostream>
#include <cmath>
using namespace std;

int check(int n){
    for(int i=(int)sqrt(n);i>1;i--){
        if(n%i==0) return i;
    }
}

int main() {
	int T,n;
	cin>>T;
	while(T--){
	    cin>>n;
	    int l = check(n);
	    int m = n/l;
	    (l>m)?cout<<l-m<<endl:cout<<m-l<<endl;
	}
	return 0;
}

