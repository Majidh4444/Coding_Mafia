#include <iostream>
using namespace std;

int gcd(int a, int b){
	if(a==0){
		return b;
	}else{
		return gcd(b%a,a);
	}
}

int gcdArray(int arr[],int n){
	int g;
	g = gcd(arr[0],arr[1]);
	for(int i=2;i<n;i++){
		if(g==1)return 1;
		g = gcd(g,arr[i]);
	}
	return g;
}

int main() {
	cout<<"Number of numbers : ";
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter Numbers: "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<gcdArray(arr,n);
	return 0;
}

