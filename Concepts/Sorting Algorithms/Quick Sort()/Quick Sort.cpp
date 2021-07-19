#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int l, int h){
	int pivot = arr[h];
	int i = l;
	for(int j=l;j<h;j++){
		if(arr[j]<pivot){
			swap(&arr[i],&arr[j]);
			i++;
		}
	}
	swap(&arr[i],&arr[h]);
	return i;
}

void quickSort(int arr[], int l, int h){
	if(l<h){
		int p = partition(arr,l,h);
		quickSort(arr,l,p-1);
		quickSort(arr,p+1,h);
	}
}

void printArr(int arr[], int n){
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}

int main(){
	int n = 5;
	int arr[] = {64, 25, 12, 22, 11};
	quickSort(arr,0,n-1);
	printArr(arr,n);
	return 0;
}
