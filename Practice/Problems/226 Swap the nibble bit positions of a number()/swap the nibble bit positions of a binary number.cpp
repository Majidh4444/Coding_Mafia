#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cout<<"Enter the Number: ";
	cin>>n;
	cout<<(((n >> 4) & 0x0f) | ((n << 4) & 0xf0));
	return 0;
}
