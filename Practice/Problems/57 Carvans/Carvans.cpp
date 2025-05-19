#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int T,n,ans,max;
	cin>>T;
	while(T--){
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    ans =1;
	    max = arr[0];
	    for(int i=1;i<n;i++){
	        if(arr[i]<=max){
	            max = arr[i];
	            ans++;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

