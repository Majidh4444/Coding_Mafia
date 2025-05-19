//6
//1 2 2 1 1 2
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	int T,n,o,m,g_o,g_m;
	cin>>T;
	while(T--){
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    sort(arr,arr+n);
	    o=g_o=1;
	    m=g_m=0;
	    for(int i=0;i<n;i++){
	       if(arr[i] == arr[i+1]){
	           o++;
	           m=i;
	       }else{
	           if(o>g_o){
	               g_o=o;
	               g_m=m;
	           }else if(o==g_o){
	           	if(arr[o]<arr[g_o]){
	           		g_o=0;
	           		g_m=m;
				   }	
			   }else{
	               o=1;
	               m=0;
	           }
	           o=1;
	       }
	    }
	    cout<<arr[g_m]<<" "<<g_o<<endl;
	}
	return 0;
}

