#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r){
	int nl = m-l+1;
	int nr = r-m;
	int L[nl],R[nr];
	
	for(int i=0;i<nl;i++) L[i] = arr[l+i];
	for(int i=0;i<nr;i++) R[i] = arr[m+i+1];
	int i=0,j=0,k=l;
	while(i<nl && j<nr){
		if(L[i]<R[j]){
			arr[k] = L[i];
			i++;
		}else{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while(i<nl){
		arr[k] = L[i];
		i++;k++; 
	}
	while(j<nr){
		arr[k] = R[j];
		j++;k++;
	}
}

void mergeSort(int arr[], int l, int r){
	if(l<r){
		int mid = l + ((r-l)/2);
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,r);
		merge(arr,l,mid,r);
	}
}

void printArr(int arr[], int n){
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}

int main(){
	int n = 5;
	int arr[] = {64, 25, 12, 32, 11};
	mergeSort(arr,0,n-1);
	printArr(arr,n);
	return 0;
}
