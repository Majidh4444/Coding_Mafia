#include<iostream>
using namespace std;

long long int FibonacciSeries(int n){
	int a=0,b=1,t;
	cout<<a<<endl<<b<<endl;
	for(int i=2;i<=n;i++){
		int t = a+b;
		cout<<t<<endl;
		a=b;
		b=t;
	}
} 

int main(){
	cout<<"Enter a number to print Fibonacci series till F(number) in O(n) time complexity:"<<endl;
	long long int N;
	cin>>N;
	FibonacciSeries(N);
	return 0;
}
