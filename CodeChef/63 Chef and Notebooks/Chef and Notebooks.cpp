#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int T,X,Y,K,N,flag;
	int price,pages;
	cin>>T;
	while(T--){
	    cin>>X>>Y>>K>>N;
	    flag=0;
	    X=X-Y;
	    for(int i=0;i<N;i++){
	        cin>>pages>>price;
	        if(pages>=X && price<=K && flag==0){
	            cout<<"LuckyChef"<<endl;
	            flag=1;
	        }
	    }
	    if(flag==0) cout<<"UnluckyChef"<<endl;
	}
	return 0;
}

