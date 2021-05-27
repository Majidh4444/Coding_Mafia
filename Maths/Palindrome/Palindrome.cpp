#include <iostream>
using namespace std;

int main() {
	int n,ans,c;
    cin>>n;
    c=n;
    ans = 0;
    while(n!=0){
        ans= ans*10+(n%10);
        n=n/10;
    }
    if(ans==c) cout<<"palindromes!!!"<<endl;
    else cout<<"Not a palindromes@@@"<<endl;
	return 0;
}

