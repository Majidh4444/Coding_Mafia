#include <iostream>
using namespace std;

int main() {
	int n,flag;
	cin>>n;
	while(n!=0){
	    int  arr[n];
	    arr[0]=0;
	    flag=1;
	    for(int i=1;i<=n;i++){
	        cin>>arr[i];
	    }
	    for(int i=1;i<=n;i++){
	        if(arr[arr[i]] != i){
	            cout<<"not ambiguous"<<endl;
	            i=n+1;
	            flag=0;
	        }
	    }
	    if(flag == 1){
	        cout<<"ambiguous"<<endl;
	    }
	    cin>>n;
	}
	return 0;
}

