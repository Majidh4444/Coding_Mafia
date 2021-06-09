#include <iostream>
#include <ctype.h>
#include <algorithm>
using namespace std;


bool isPerfectSquare(int num) {
    long long low = 1;
    long long high = num;
    long long mid;
    while(low<=high){
        mid = ((high-low)/2)+low;
        if(mid*mid == num) return true;
        else if(mid*mid > num) high = mid-1;
        else low = mid+1;
    }
    return false;
}

int main() {
	long long n;
	cout<<"Enter the Number:"<<endl;
	cin>>n;
	cout<<isPerfectSquare(n);
	return 0;
}
