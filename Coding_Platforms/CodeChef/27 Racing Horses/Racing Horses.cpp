#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T,n;
	cin>>T;
	while(T--){
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int g_m=1000000000;
	    int l_m;
	    for(int i=0;i<n-1;i++){
	        l_m = (arr[i]>arr[i+1])?(arr[i]-arr[i+1]):(arr[i+1]-arr[i]);
	        if(l_m<g_m){
	            g_m=l_m;
	        }
	    }
	    cout<<g_m<<endl;
	}
	return 0;
}

