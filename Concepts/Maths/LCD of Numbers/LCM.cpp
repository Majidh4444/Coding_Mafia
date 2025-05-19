#include <iostream>
using namespace std;

int gcd(int a, int b){
	if(a==0){
		return b;
	}else{
		return gcd(b%a,a);
	}
}

int lcmArray(int arr[],int n){
	int l;
	l=(arr[0]*arr[1])/gcd(arr[0],arr[1]);
	for(int i=2;i<n;i++){
		l = (l/gcd(l,arr[i]))*arr[i]; //(a/gcd)*b best than (a*b)/gcd
	}
	return l;
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
	cout<<lcmArray(arr,n);
	return 0;
}

