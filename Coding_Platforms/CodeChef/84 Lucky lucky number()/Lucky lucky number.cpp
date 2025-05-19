#include <iostream>
using namespace std;

int main() {
    int T,n,flag;
    cin>>T;
    while(T--){
    	flag=1;
        cin>>n;
        if(n%7==0){
			cout<<n<<endl;
			continue;	
		}
        for(int i=0;i<=(n/4);i++){
            if((n-(4*i))%7==0){
                cout<<n-(4*i)<<endl;
                flag=0;
                break;
            }
        }
        if(flag==1){
			cout<<"-1"<<endl;	
		}
    }
	return 0;
}

