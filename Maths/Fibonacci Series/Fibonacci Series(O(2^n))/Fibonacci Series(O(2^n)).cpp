#include<iostream>
using namespace std;

long long int FibonacciSeries(int n){
	if(n<=1) return n;
	return FibonacciSeries(n-1)+FibonacciSeries(n-2);
} 

int main(){
	cout<<"Enter a number to find it's corresponding Fibonacci number in O(2^n) time complexity:"<<endl;
	long long int N;
	cin>>N;
	long long int ans = FibonacciSeries(N);
	cout<<ans;
	return 0;
}
