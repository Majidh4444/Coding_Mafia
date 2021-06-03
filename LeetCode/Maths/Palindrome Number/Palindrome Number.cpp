#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false;
	long reversed = 0, localNum = x;
	while (localNum) {
		reversed = 10 * reversed + localNum % 10;
		localNum = localNum / 10;
	}
	return (reversed == x);
}


int main() {
	int N;
	cout<<"Enter a Number:"<<endl;
	cin>>N;
	bool r=isPalindrome(N);
	cout<<r;
	return 0;
}
