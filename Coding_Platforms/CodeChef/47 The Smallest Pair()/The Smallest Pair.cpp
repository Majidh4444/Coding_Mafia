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
	    cout<<(arr[0]+arr[1])<<endl;
	}
	return 0;
}

