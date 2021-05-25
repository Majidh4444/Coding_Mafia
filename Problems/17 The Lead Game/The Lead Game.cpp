#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int r;
	int w;
	int a_total=0,b_total=0;
	int a_max=0,b_max=0;
	cin>>r;
	for(int i=0;i<r;i++){
	    int a,b;
	    cin>>a>>b;
	    a_total+=a;b_total+=b;
	    if(a_total>b_total){
	        a_max=max(a_max,a_total-b_total);
	    }else{
	        b_max=max(b_max,b_total-a_total);
	    }
	}
	if(a_max>b_max){
	    cout<<1<<" "<<a_max;
	}else{
	    cout<<2<<" "<<b_max;
	}
	return 0;
}

