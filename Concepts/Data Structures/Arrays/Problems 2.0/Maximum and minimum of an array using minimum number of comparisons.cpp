#include<bits/stdc++.h>
using namespace std;

void minComp(int n, int arr[]){
    int min, max, i;

    if(n == 1){
        min = arr[0];
        max = arr[0];
        i = 1;
    }else if(n%2 == 0){
        if(arr[0] > arr[1]){
            min = arr[1];
            max = arr[0];
        }else{
            min = arr[0];
            max = arr[1];
        }
        i = 2;
    }else{
        min = arr[0];
        max = arr[0];
        i = 1;
    }

    while(i < n-1){
        if(arr[i] < arr[i+1]){
            if(arr[i+1] > max) max = arr[i+1];
            if(arr[i] < min) min = arr[i];
        }else{
            if(arr[i] > max) max = arr[i];
            if(arr[i+1] < min) min = arr[i+1];
        }
        i += 2;
    }

    cout<<min<<" "<<max;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];

    minComp(n,arr);
    return 0;
}