#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

float distance(int x1, int y1,int x2,int y2){
    return sqrt(pow(x2-x1,2)+(pow(y2-y1,2)));
}

int main() {
	int T,x1,y1,x2,y2,x3,y3,R;
	float a,b,c;
	cin>>T;
	while(T--){
	    cin>>R;
	    cin>>x1>>y1;
	    cin>>x2>>y2;
	    cin>>x3>>y3;
	    a = distance(x1,y1,x2,y2);
	    b = distance(x1,y1,x3,y3);
	    c = distance(x2,y2,x3,y3);
	    if((a<=R && b<=R) || (a<=R && c<=R) || (b<=R && c<=R)) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}

