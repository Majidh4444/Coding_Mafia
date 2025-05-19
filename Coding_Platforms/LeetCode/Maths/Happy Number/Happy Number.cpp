#include <iostream>
#include <algorithm>
using namespace std;

long long int happyNumber(int n){
    long long int ans = 0;
    while(n>0){
        ans += (n%10)*(n%10);
        n=n/10;
    }
    return ans;
}

bool isHappy(int n) {
    long long int a = n;
    int i = 0;
    while(happyNumber(a)!=happyNumber(happyNumber(a))){
        a = happyNumber(a);
        if(i>100) return false;
        i++;
    }
    a = happyNumber(a);
    if(a==1) return true;
    return false;
}

int main() {
	int N;
	cout<<"Enter a Number:"<<endl;
	cin>>N;
	cout<<isHappy(N);
	return 0;
}

