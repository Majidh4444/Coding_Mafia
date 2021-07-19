#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int arr[], int n){
	int min;
	for(int i=0;i<n-1;i++){
		min = i;
		for(int j=i+1;j<n;j++){
			if(arr[min] > arr[j]) min = j;
		}
		swap(&arr[i],&arr[min]);
	}
}

void printArr(int arr[], int n){
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}

int main(){
	int n = 5;
	int arr[] = {64, 25, 12, 22, 11};
	selectionSort(arr,n);
	printArr(arr,n);
}
