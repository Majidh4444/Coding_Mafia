#include <iostream>
using namespace std;

int main() {
	int T,n;
	cin>>T;
	while(T--){
	    cin>>n;
	    (n%2==0)?(cout<<n<<endl):(cout<<n-1<<endl)<<endl;
	}
	return 0;
}

