// sort both arrays
// while i<n
// if arr[i] > dep(j) j++;i++;
// else i++;

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    static bool com(const vector<int>& v1, const vector<int>& v2){
        return v1[1]<v2[1];
    }
    
    int findPlatform(int arr[], int dep[], int n){
    	sort(arr, arr+n);
    	sort(dep, dep+n);
    	int i = 1;
    	int j = 0;
    	int plt = 1;
    	while(i<n){
    	    if(arr[i] > dep[j]) j++;
    	    else plt++;
    	    i++;
    	}
    	
    	return plt;
    }
};

int main(){
	int n;
	cin>>n;
	int arr[n];
	int dep[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int j=0;j<n;j++){
		cin>>dep[j];
	}
	Solution ob;
	cout <<ob.findPlatform(arr, dep, n);
    
   return 0;
}