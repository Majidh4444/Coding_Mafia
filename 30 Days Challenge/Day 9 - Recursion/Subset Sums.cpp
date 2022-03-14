// Use recursion
// add sum to vector at each call

#include<bits/stdc++.h> 
using namespace std; 

class Solution{
public:
    void rec(vector<int> arr, vector<int>& v, int i, int sum){
        if(i<0) return;
        v.push_back(sum+arr[i]);
        rec(arr,v,i-1,sum+arr[i]);
        rec(arr,v,i-1,sum);
    }

    vector<int> subsetSums(vector<int> arr, int N){
        vector<int> v;
        v.push_back(0);
        rec(arr,v,N-1,0);
        return v;
    }
};

int main(){
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i = 0 ; i < N ; i++) cin>>arr[i];
    Solution ob;
    vector<int> ans = ob.subsetSums(arr,N);
    sort(ans.begin(),ans.end());
    for(auto sum : ans) cout<< sum<<" ";
    return 0;
}