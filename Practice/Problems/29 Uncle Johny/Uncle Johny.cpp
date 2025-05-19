#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T,n,k;
	cin>>T;
	while(T--){
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cin>>k;
	    int U_J = arr[k-1];
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++){
	        if(arr[i] == U_J){
	            cout<<i+1<<endl;
	            i=n;
	        }
	    }
	}
	return 0;
}

