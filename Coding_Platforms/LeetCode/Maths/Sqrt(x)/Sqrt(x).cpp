#include <iostream>
#include <algorithm>
using namespace std;

int mySqrt(int x) {
    long long int f = 0;
    long long int l = x;
    long long int m;
    while(l>=f){
        m = (f+l)/2;
        if(m*m==x) return m;
        else if(m*m>x){
            l = m-1;
        }else{
            f = m+1;
        }
    }
    return l;
}

int main() {
	int N;
	cout<<"Enter a Number:"<<endl;
	cin>>N;
	int r=mySqrt(N);
	cout<<r;
	return 0;
}

