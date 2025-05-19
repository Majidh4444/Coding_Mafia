#include <iostream>
#include <ctype.h>
#include <algorithm>
using namespace std;


double myPow(double x, int n) {
    if(x==1 || x==0) return 1;
    double ans = 1;
    while(n){
        if(n%2) ans = (n>0)?(ans*x):(ans/x);
         x *= x;
        n /= 2;
    }
    return ans;
}

int main() {
	double x;
	int n;
	cout<<"Enter Base and Power to find it's value:"<<endl;
	cin>>x>>n;
	cout<<myPow(x,n);
	return 0;
}
