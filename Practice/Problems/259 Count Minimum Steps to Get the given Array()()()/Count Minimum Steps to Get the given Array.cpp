#include<bits/stdc++.h>
using namespace std;

int playTheGame(int arr[], int n){
    int min_moves = 0;
    while(1){
        int zeroes = 0;
        int i;
        for(i=0; i<n; i++){
            if(arr[i] & 1) break;
            else if(arr[i] == 0) zeroes++;
        }
        
        if(zeroes == n) return min_moves;
        
        if(i == n){
            for (int j=0; j<n; j++){
               arr[j] = arr[j]/2;
            }
            min_moves++;
        }
 
        for (int j=i; j<n; j++){
           if (arr[j] & 1){
              arr[j]--;
              min_moves++;
           }
        }
    }
    return min_moves;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	cout<<playTheGame(arr,n);
	return 0;
}


