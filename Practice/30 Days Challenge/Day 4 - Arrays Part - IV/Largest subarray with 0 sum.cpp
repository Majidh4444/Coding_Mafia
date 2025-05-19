// use for loop if sum is zero then its the max
// if same sum comes again then length = i-m[sum]
// At every iteration find maxLength and return it

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxLen(vector<int>&A, int n){   
        unordered_map<int,int> m;
        int maxLength = 0;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += A[i];
            
            if(sum == 0) maxLength = i+1;
            
            if(m.find(sum) == m.end()) m[sum] = i;
            else maxLength = max(maxLength, i-m[sum]);
        }
        return maxLength;
    }
};


int main(){
    int m;
    cin>>m;
    vector<int> array1(m);
    for (int i = 0; i < m; ++i) cin>>array1[i];
    Solution ob;
    cout<<ob.maxLen(array1,m);
    return 0; 
}