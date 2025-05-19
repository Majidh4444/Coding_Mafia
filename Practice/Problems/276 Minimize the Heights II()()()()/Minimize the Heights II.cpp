#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            if(arr[i]>=k) v.push_back({arr[i]-k,i});
            v.push_back({arr[i]+k,i});
        }
        sort(v.begin(),v.end());
        int l=0,e=0,r=0;
        int vis[n] = {0};
        while(e<n && r<v.size()){
            if(vis[v[r].second] == 0) e++;
            vis[v[r].second]++;
            r++;
        }
        
        int d = v[r-1].first-v[l].first;
        
        while(r<v.size()){
            if(vis[v[l].second]==1) e--;
            vis[v[l].second]--;
            l++;
            
            while(e<n && r<v.size()){
                if(vis[v[r].second] == 0) e++;
                vis[v[r].second]++;
                r++;
            }
            if(e==n) d = min(d,v[r-1].first-v[l].first);
            else break;
        }
        
        return d;
    }
};

int main() {
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

//Input:
//2
//4
//1 5 8 10
//Output:

