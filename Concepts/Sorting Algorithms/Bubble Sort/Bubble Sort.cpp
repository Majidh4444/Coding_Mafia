#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]) swap(arr+j,arr+(j+1));
		}
	}
}

void printArr(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}	
}

int main(){
	int n = 9;
	int arr[] = {8,3,5,21,7,1,2,12,4};
	bubbleSort(arr,n);
	printArr(arr,n);
	return 0;
}
