#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int sum=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        sum = sum+arr[i];
	    }
	    int lSum=arr[0];
	    int rSum;
	    int flag = 1;
	    for(int i=1;i<n;i++){
	        rSum = sum-lSum-arr[i];
	        if(rSum == lSum){
	            cout<<arr[i]<<endl;
	            flag=0;
	            break;
	        }
	        lSum=lSum+arr[i];
	    }
	    if(flag==1){
	        cout<<"NO EQUILIBRIUM"<<endl;;
	    }
	}
	return 0;
}

