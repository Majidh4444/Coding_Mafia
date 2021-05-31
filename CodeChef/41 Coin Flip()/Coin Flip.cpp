#include <iostream>
using namespace std;

int main() {
	int T,n;
	int a,N,b;
	cin>>T;
	while(T--){
	    cin>>n;
	    while(n--){
	        cin>>a>>N>>b;
	        int c  = (N/2) + ((N%2)!=0);
	        if(a==b){
	            cout<<N-c<<endl;
	        }else{
	            cout<<c<<endl;
	        }
	    }
	    
	}
	return 0;
}

