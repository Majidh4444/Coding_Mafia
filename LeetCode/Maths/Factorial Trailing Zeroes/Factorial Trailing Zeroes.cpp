#include <iostream>
#include <algorithm>
using namespace std;

int trailingZeroes(int n) {
    int ans = 0;
    while(n>0){
        ans+=n/5;
        n/=5;
    }
    return ans;
}

int main() {
	int N;
	cout<<"Enter a Number:"<<endl;
	cin>>N;
	cout<<trailingZeroes(N);
	return 0;
}

