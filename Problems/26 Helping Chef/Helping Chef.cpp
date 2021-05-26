#include <iostream>
using namespace std;

int main() {
	int T,n;
	cin>>T;
	while(T--){
	    cin>>n;
	    if(n<10){
	        cout<<"Thanks for helping Chef!"<<endl;
	    }else{
	        cout<<-1<<endl;
	    }
	}
	return 0;
}

