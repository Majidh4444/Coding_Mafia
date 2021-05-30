#include <iostream>
using namespace std;

int palindrome(int n){
    int p=0;
    while(n>0){
        p = p*10+(n%10);
        n = n/10;
    }
    return p;
}

int checkPalindrome(int* n,int m){
    int p = palindrome(*n);
    *n = *n+p;
    int x = palindrome(*n);
    if(*n==x) return m;
    return checkPalindrome(n,m+1);
}

int main() {
	int T,n;
	cin>>T;
	while(T--){
	    cin>>n;
	    int ans = checkPalindrome(&n,1);
	    cout<<ans<<" "<<n<<endl;
	}
	return 0;
}

