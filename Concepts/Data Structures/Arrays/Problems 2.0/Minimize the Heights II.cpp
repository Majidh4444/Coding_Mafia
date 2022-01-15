#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        //* Sort the Array
        sort(arr, arr+n);
        
        int diff = arr[n-1]-arr[0];
        
        int smallest = arr[0]+k;
        int largest = arr[n-1]-k;
        int miN, maX;
        
        for(int i=0;i<n-1;i++){
            //* Comparing smallest and largest with all possiblities
            //* Decreasing i+1th by k and comapring with smallest
            miN = min(smallest, arr[i+1]-k);
            //* Increasing ith by k and comapring with largest
            maX = max(largest, arr[i]+k);
            //* If miN is negative
            if(miN<0) continue;
            diff = min(diff, maX-miN);
        }
        return diff;
    }
};

int main(){
    int n, k;
    cin >> k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Solution ob;
    auto ans = ob.getMinDiff(arr, n, k);
    cout << ans;
    return 0;
}