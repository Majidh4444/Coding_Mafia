#include <iostream>
#include <algorithm>
using namespace std;

string convertToTitle(int N) {
    string S = "";
    while(N>0){
        S= (char)((N-1)%26+'A') + S;
        N = (N-1)/26;
    }
    return S;
}

int main() {
	int N;
	cout<<"Enter a Number:"<<endl;
	cin>>N;
	cout<<convertToTitle(N);
	return 0;
}

