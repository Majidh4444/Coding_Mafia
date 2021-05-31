#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
	    cout<<arr[i]<<"\n";
	}
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	sort(arr,arr+n);
	printArray(arr,n);
	return 0;
}

