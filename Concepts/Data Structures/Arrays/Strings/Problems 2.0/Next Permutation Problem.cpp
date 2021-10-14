#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        int i = N-1;
        int miN = INT_MAX;
        int ind = N-1;
        
        while(i>0){
            if(arr[i-1] < arr[i]) break;
            i--;
        }
        int j = i;
        while(j<N){
            if(arr[i-1]<arr[j] && arr[j]<miN){
                miN = arr[j];
                ind = j;
            }
            j++;
        }
        
        if(i!=0){
            int t = arr[ind];
            arr[ind] = arr[i-1];
            arr[i-1] = t;
        }
        
        sort(arr.begin()+i,arr.end());
        
        return arr;
    }
    
};

int main(){
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i = 0;i < N;i++)
        cin>>arr[i];
    
    Solution ob;
    vector<int> ans = ob.nextPermutation(N, arr);
    for(int u: ans)
        cout<<u<<" ";
    return 0;
}