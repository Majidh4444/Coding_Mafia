#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T,n,f;
	cin>>T;
	while(T--){
	    cin>>n;
	    f=1;
	    if(n==1){
	        cout<<"no"<<endl;
	        continue;
	    }
	    for(int i=2;i<=sqrt(n);i++){
	        if(n%i==0){
	            cout<<"no"<<endl;
	            f=0;
	            i=n;
	        }
	    }
	    if(f==1){
	    	cout<<"yes"<<endl;
		}
	}
	return 0;
}

