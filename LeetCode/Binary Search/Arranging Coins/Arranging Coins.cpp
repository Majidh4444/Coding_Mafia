#include <iostream>
#include <ctype.h>
#include <algorithm>
using namespace std;



int arrangeCoins(int n) {
    long long low = 1;
    long long high = n;
    long long m;
    while(low<=high){
        m = ((high-low)/2)+low;
        if(((m*(m+1))/2) == n) return m;
        else if(((m*(m+1))/2) > n) high = m-1;
        else low = m+1;
    }
    return high;
}


int main() {
	int n;
	cout<<"Enter the Number:"<<endl;
	cin>>n;
	cout<<arrangeCoins(n);
	return 0;
}
