#include <iostream>
using namespace std;

int rev(int x){
    int s=0;
    while(x>0){
        s=s*10 + x%10;
        x=x/10;
    }
    return s;
}

int main() {
	long long int N,a,b;
	cin>>N;
	while(N--){ 
	cin>>a>>b;
	    a=rev(a);
	    b=rev(b);
	    cout<<rev(a+b)<<endl;
	}
	return 0;
}
