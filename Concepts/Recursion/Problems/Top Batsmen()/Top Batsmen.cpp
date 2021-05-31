#include <iostream>
#include <algorithm>
using namespace std;

int check(int arr[],int n,int k,int sum){
    if(n<0) return 0;
    else if(k==0){
        if(sum==0){
            return 1;
        }
        return 0;
    }
    return check(arr,n-1,k,sum)+check(arr,n-1,k-1,sum-arr[n-1]);
}

int main() {
	int T,k;
	cin>>T;
	while(T--){
	    int arr[11];
	    for(int i=0;i<11;i++) cin>>arr[i];
	    cin>>k;
	    sort(arr,arr+11);
	    int sum=0;
	    for(int i=10;i>10-k;i--) sum+=arr[i];
	    int ans=check(arr,11,k,sum);
	    cout<<ans<<endl;
	}
	return 0;
}

