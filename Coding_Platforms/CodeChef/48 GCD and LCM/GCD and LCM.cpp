#include <iostream>
using namespace std;

long int gcd(int a, int b){
    if(a==0) return b;
    return gcd(b%a,a);
}

int main() {
	int T;
	long int a,b,g,l;
	cin>>T;
	while(T--){
	    cin>>a>>b;
	    g = gcd(a,b);
	    l = (a/g)*b;
	    cout<<g<<" "<<l<<endl;
	}
	return 0;
}

