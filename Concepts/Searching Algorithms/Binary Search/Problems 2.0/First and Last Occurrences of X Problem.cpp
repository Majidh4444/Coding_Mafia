#include<bits/stdc++.h>
using namespace std;


//Time Complexity => O(log(N))


vector<int> find(int a[], int n , int x );

int main(){
    int n,x;
    cin>>n>>x;
    int arr[n],i;
    for(i=0;i<n;i++)
    cin>>arr[i];
    vector<int> ans;
    ans=find(arr,n,x);
    cout<<ans[0]<<" "<<ans[1];
}

int binarySearchHighest(int arr[], int n , int x, int f, int l){
    if(f<=l){
        int mid = ((l-f)/2)+f;
        if(arr[mid] == x){
            if(mid >= 0 && arr[mid+1] != x) return mid;
            else return binarySearchHighest(arr,n,x,mid+1,l);
        }
        else if(arr[mid] > x) return binarySearchHighest(arr,n,x,f,mid-1);
        else if(arr[mid] < x) return binarySearchHighest(arr,n,x,mid+1,l);
    }
    return -1;
}

int binarySearchLowest(int arr[], int n , int x, int f, int l){
    if(f<=l){
        int mid = ((l-f)/2)+f;
        if(arr[mid] == x){
            if(mid >= 0 && arr[mid-1] != x) return mid;
            else return binarySearchLowest(arr,n,x,f,mid-1);
        }
        else if(arr[mid] > x) return binarySearchLowest(arr,n,x,f,mid-1);
        else if(arr[mid] < x) return binarySearchLowest(arr,n,x,mid+1,l);
    }
    return -1;
}


vector<int> find(int arr[], int n , int x ){
    int l,h;
    l = binarySearchLowest(arr,n,x,0,n-1);
    h = binarySearchHighest(arr,n,x,0,n-1);
    return {l,h};
}