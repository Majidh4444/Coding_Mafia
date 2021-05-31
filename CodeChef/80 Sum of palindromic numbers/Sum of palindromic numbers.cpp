#include <iostream>
using namespace std;

int isPalindrome(int n){
    int m=0;
    int c=n;
    while(n!=0){
        m=m*10+(n%10);
        n=n/10;
    }
    return (c==m)?1:0;
}

int main() {
	int T,L,R,ans;
	cin>>T;
	while(T--){
	    ans=0;
	    cin>>L>>R;
	    for(int i=L;i<=R;i++){
	        if(isPalindrome(i)) ans+=i;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

