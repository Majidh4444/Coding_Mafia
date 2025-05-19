#include <iostream>
using namespace std;

long long int Factorial(int n){
    if(n==0)return 1;
    if(n==1 || n==2)return n;
    return n*Factorial(n-1);
}

int main() {
	int T,n;
	cin>>T;
	while(T--){
	    cin>>n;
	    cout<<Factorial(n)<<endl;
	}
	return 0;
}

