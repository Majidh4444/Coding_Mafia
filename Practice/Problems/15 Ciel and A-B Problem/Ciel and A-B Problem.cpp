#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	int ans = a-b;
	if(ans%10==9){
	    ans=ans-1;
	}else{
	    ans=ans+1;
	}
	cout<<ans;
	return 0;
}
