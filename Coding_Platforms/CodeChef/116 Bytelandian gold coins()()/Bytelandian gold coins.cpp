#include <iostream>
#include <map>
using namespace std;

map<long long int,long long int> m;

long long int checkCoins(long long int n){
    if(n<=11) return n;
    if(m[n]!=0) return m[n];
    m[n] = checkCoins(n/2)+checkCoins(n/3)+checkCoins(n/4);
    return m[n];
}

int main() {
	long long int N;
	while(scanf("%lld",&N)!=EOF){
	    cout<<checkCoins(N)<<endl;
	}
	
	return 0;
}

