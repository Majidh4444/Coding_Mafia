#include <iostream>
using namespace std;

int main() {
	int n,e=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	for(int i=0;i<n;i++){
	    if(arr[i]%2==0) e+=1;
	}
	if(e>(n-e)) cout<<"READY FOR BATTLE";
	else cout<<"NOT READY";
	return 0;
}

