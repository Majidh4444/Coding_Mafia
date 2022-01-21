#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    long long int merge(long long arr[], long long l, long long mid, long long r){
        long long int inv = 0;
        long long int n1 = mid-l+1;
        long long int n2 = r-mid;
        long long int L[n1], R[n2];
        
        for(int i=0;i<n1;i++) L[i] = arr[l+i];
        for(int i=0;i<n2;i++) R[i] = arr[mid+1+i];
        
        long long int i=0,j=0,k=l;
        
        while(i<n1 and j<n2){
            if(L[i] <= R[j]){
                arr[k] = L[i];
                i++;
            }else{
                arr[k] = R[j];
                inv += n1-i;
                j++;
            }
            k++;
        }
        
        while(i<n1){
            arr[k] = L[i];
            k++;i++;
        }
        
        while(j<n2){
            arr[k] = R[j];
            k++;j++;
        }
         
        return inv;
    }
    
    long long int mergeSort(long long arr[], long long l, long long r){
        long long int inv = 0;
        if(l < r){
            int mid = l + ((r-l)/2);
            inv += mergeSort(arr,l,mid);
            inv += mergeSort(arr,mid+1,r);
            inv += merge(arr,l,mid,r);
        }
        return inv;
    }
    
    long long int inversionCount(long long arr[], long long N){
        return mergeSort(arr,0,N-1);
    }

};

int main() {
    long long N;
    cin >> N;
    long long A[N];
    for(long long i = 0;i<N;i++){
        cin >> A[i];
    }
    Solution obj;
    cout << obj.inversionCount(A,N);
    return 0;
}