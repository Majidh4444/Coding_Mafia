#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long trappingWater(int arr[], int n){
        int l=0,r=n-1;
        long long t = 0;

        //* Finding first block from both sides
        while(l<n and arr[l] == 0) l++;
        while(r>0 and arr[r] == 0) r--;
        int lBlocks = arr[l],rBlocks = arr[r];
        l++;r--;
        
        while(l<=r){
            //* If left block is smaller then water wil be to that level
            if(lBlocks <= rBlocks){
                //* If we find block longer than previous block then we update
                if(lBlocks <= arr[l]){
                    lBlocks = arr[l];
                }else{
                    //* else we add water storage to total storage
                    t += (lBlocks-arr[l]);
                }
                l++;
            }else{
                if(rBlocks <= arr[r]){
                    rBlocks = arr[r];
                }else{
                    t += (rBlocks-arr[r]);
                }
                r--;
            }
        }
        return t;
    }
};

int main(){
    int n;
    cin >> n;
    int a[n];
    
    for(int i =0;i<n;i++) cin >> a[i];            
    
    Solution obj;
    cout<<obj.trappingWater(a, n);
    return 0;
}