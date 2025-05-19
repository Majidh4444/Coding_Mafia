#include <iostream>
using namespace std;

int main() {
	int T,a,b,min,max;
	cin>>T;
	while(T--){
	    cin>>a>>b;
	    min = (a>b)?a:b;
	    max = a+b;
	    cout<<min<<" "<<max<<endl;
	}
	return 0;
}

