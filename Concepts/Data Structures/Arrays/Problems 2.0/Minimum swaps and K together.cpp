#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int minSwap(int arr[], int n, int k) {
        int good = 0;
        int bad = 0;
        
        //* counting values which are required and making window
        for(int i=0;i<n;i++){
            if(arr[i] <= k) good++;
        }
        
        //* counting not required vales in the window
        for(int i=0;i<good;i++){
            if(arr[i]>k) bad++;
        }
        
        //* Forming window
        int i=0, j = good, swaps = bad;
        
        while(j<n){
            //* Moving window and operaing bad values
            if(arr[i]>k) bad--;
            if(arr[j]>k) bad++;
            
            //* updating swap values
            swaps = min(swaps, bad);
            i++;j++;
        }
        return swaps;
    }
};


int main(){
	int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cin>>k;
    Solution ob;
    cout<<ob.minSwap(arr, n, k);
	return 0;
}