#include <iostream>
using namespace std;

void SieveOfEratosthenes(int n){
	int arr[n+1];
	for(int i=0;i<=n;i++) arr[i]=1;
	for(int p=2;(p*p)<=n;p++){
		if(arr[p]==1){
			for(int i=p*2;i<=n;i+=p){
				arr[i]=0;
			}
		}
	}
	
	for(int i=2;i<=n;i++){
		if(arr[i]==1) cout<<i<<" ";
	}
}



int main() {
	cout<<"Enter the to which Prime Numbers to get Printed: "<<endl;
	int N;
	cin>>N;
	SieveOfEratosthenes(N);
}

