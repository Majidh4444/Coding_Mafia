#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int T,flag,n;
	string S;
	cin>>T;
	while(T--){
	    cin>>n;
	    cin>>S;
	    flag = 1;
	    for(auto c:S){
	        if(c == 'I'){
	            cout<<"INDIAN"<<endl;
	            flag = 0;
	            break;
	        }else if(c =='Y'){
	            flag = 0;
	            cout<<"NOT INDIAN"<<endl;
	            break;
	        }
	    }
	    if(flag == 1) cout<<"NOT SURE"<<endl;
	}
	return 0;
}

