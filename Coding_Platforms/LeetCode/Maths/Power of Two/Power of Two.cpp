#include <iostream>
#include <algorithm>
using namespace std;

bool isPowerOfTwo(int n) {
    if(n<=0) return false;
    while(n>1){
        if(n%2!=0) return false;
        n/=2;
    }
    return true;
}

int main() {
	int N;
	cout<<"Enter a Number:"<<endl;
	cin>>N;
	cout<<isPowerOfTwo(N);
	return 0;
}

