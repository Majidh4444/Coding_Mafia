#include <iostream>
#include <cmath>
using namespace std;

int isPalindrome(int n){
    int ans=0;
    int c = n;
    while(n>0){
        ans = ans*10+(n%10);
        n = n/10;
    }
    return (c==ans)?1:0;
}

int isPrime(int n){
    if(n==1) return 0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i == 0) return 0;
    }
    return 1;
}

int main(void) {
	int N;
	cin>>N;
	while(isPalindrome(N)==0 || isPrime(N)==0){
	    N++;
	}
	cout<<N<<endl;
	return 0;
}

