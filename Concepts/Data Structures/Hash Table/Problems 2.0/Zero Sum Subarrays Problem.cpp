#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution{
    public:
    ll findSubarray(vector<ll> arr, int n ) {
        unordered_map<int,int> m;
        int sum = 0;
        int count = 0;
        
        for(int i=0;i<n;i++){
            sum += arr[i];

            if(sum == 0) count++;
            if(m.find(sum) == m.end()) m[sum] = 1;
            else{
                count = count + m[sum];
                m[sum]++;
            }
        }
        return count;
    }
};

int main(){
    int n;
    cin>>n;
    
    vector<ll> arr(n,0);
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    Solution ob;
    cout << ob.findSubarray(arr,n);
	return 0;
}