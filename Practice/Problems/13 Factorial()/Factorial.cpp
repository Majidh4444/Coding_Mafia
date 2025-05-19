#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int i = 5;
		int count = 0;
		while(n/i != 0){
		    count=count+n/i;
		    n=n/i;
		}
		cout<<count<<endl;
	}
	return 0;	
}
