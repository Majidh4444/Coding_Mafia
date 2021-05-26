#include <iostream>
using namespace std;

int main() {
	int T,n,m;
	cin>>T;
	while(T--){
	    cin>>n;
	    int arr[n][n];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<=i;j++){
	            cin>>arr[i][j];
	        }
	    }
	    for(int i=n-1;i>=0;i--){
	        for(int j=0;j<i;j++){
	            if(arr[i][j+1]>arr[i][j]){
	                arr[i-1][j]=arr[i-1][j]+arr[i][j+1];
	            }else{
	                arr[i-1][j]=arr[i-1][j]+arr[i][j];
	            }
	        }
	    }
	    cout<<arr[0][0]<<endl;
	}
	return 0;
}

