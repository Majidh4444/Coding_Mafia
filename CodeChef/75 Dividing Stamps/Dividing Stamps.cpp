#include <iostream>
using namespace std;

int main() {
	int N,x,sum=0;
	cin>>N;
	for(int i=0;i<N;i++){
	    cin>>x;
	    sum+=x;
	}
	int c = (N*(N+1))/2;
	(sum==c)?cout<<"YES":cout<<"NO";
	return 0;
}

