#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

void alternatives(int arr[], int n){
    int i=0,j=n-1;

    while(i<j){
        while(i< n and arr[i] >0) i++;
        while(j >= 0 and arr[j] < 0) j--;
        if(i<j) swap(&arr[i], &arr[j]);
    }

    if(i ==0 || i == n) return;

    int k = 0;

    while(k,n and i<n){
        swap(&arr[i], &arr[k]);
        i++;
        k += 2;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    alternatives(arr,n);

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    
    return 0;
}