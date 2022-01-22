#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int,int> m;
        int count = 0;
        for(int i=0;i<n;i++){
            //* Considering all possible pair in behind array
            count += m[k-arr[i]];
            m[arr[i]]++;
        }
        return count;
    }
};

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Solution ob;
    auto ans = ob.getPairsCount(arr, n, k);
    cout << ans;
    return 0;
}