#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int T;
	float a,b,c;
	cin>>T;
	while(T--){
	    cin>>a>>b>>c;
	    (a>50)?(a=1):(a=0);
	    (b<0.7)?(b=1):(b=0);
	    (c>5600)?(c=1):(c=0);
	    if(a==1 && b==1 && c==1) cout<<"10"<<endl;
	    else if(a==1 && b==1 && c==0) cout<<"9"<<endl;
	    else if(a==0 && b==1 && c==1) cout<<"8"<<endl;
	    else if(a==1 && b==0 && c==1) cout<<"7"<<endl;
	    else if((a==1 && b==0 && c==0) || (a==0 && b==0 && c==1) || (a==0 && b==1 && c==0)) cout<<"6"<<endl;
	    else cout<<"5"<<endl;
	}
	return 0;
}

