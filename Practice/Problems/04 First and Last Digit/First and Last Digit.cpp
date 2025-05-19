#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n;
	for(int i=0;i<t;i++){
	    cin>>n;
	    int f,l;
	    l = n%10;
	    while(n>9){
	        n = n/10;
	    }
	    f = n;  
	    cout<<f+l<<endl;
	}
	return 0;
}

