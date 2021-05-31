#include <iostream>
using namespace std;

int check(int arr[], int n, int m){
    if(n==0) return (m==0)?1:0;
    return check(arr,n-1,m)+check(arr,n-1,m-arr[n-1]);
}

int main() {
	int T,n,m;
	cin>>T;
	while(T--){
	    cin>>n>>m;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int ans = check(arr,n,m);
	    (ans>0)?cout<<"Yes"<<endl:cout<<"No"<<endl;
	}
	return 0;
}

