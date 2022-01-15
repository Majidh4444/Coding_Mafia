#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        long long current_max = arr[0];
        long long global_max = arr[0];
        
        for(int i=1;i<n;i++){
            current_max = (arr[i] < current_max+arr[i])?current_max+arr[i]:arr[i];
            if(global_max<current_max) global_max = current_max;
        }
        return global_max;
    }
};

int main(){
    int n;
    cin>>n; //input size of array
    int a[n];
    
    for(int i=0;i<n;i++)
        cin>>a[i]; //inputting elements of array
        
    Solution ob;
    cout << ob.maxSubarraySum(a, n);
}