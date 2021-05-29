#include <iostream>
using namespace std;

int main() {
	int T,n,localInversions,inversions;
	cin>>T;
	while(T--){
	    localInversions=0;
	    inversions=0;
	    cin>>n;
	    if(n==1){
	    	cin>>n;
	        cout<<"YES"<<endl;
	        continue;
	    }
	    int arr[n];
	    cin>>arr[0];
	    for(int i=1;i<n;i++){
	    	cin>>arr[i];
	        if(arr[i-1]>arr[i]){
	            localInversions++;
	        }
	    }
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            if(i<j && arr[i]>arr[j]){
	                inversions++;
	            }
	        }
	    }
	    (localInversions==inversions)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}

