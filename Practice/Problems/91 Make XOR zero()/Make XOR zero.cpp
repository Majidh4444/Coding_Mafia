#include <iostream>
using namespace std;

int main()
{
	int T,n,temp;
	cin>>T;
	while(T--){
	    cin>>n; 
	    int ones=0;
	    for(int i=0;i<n;i++){
	        cin>>temp;
	        if(temp==1) ones++;
	    }
	    if(ones%2==0) cout<<n-ones<<endl;
	    else cout<<ones<<endl;
	}
	return 0;
}

