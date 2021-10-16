#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    string secFrequent (string arr[], int n){
        unordered_map<string, int> m;
        int maX = INT_MIN;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
            if(maX < m[arr[i]]) maX = m[arr[i]];
        }
        
        int smaX = INT_MIN;
        string s;
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second != maX && smaX < it->second){
                smaX = it->second;
                s = it->first;
            }
        }
        return s;
    }
};

int main(){
    int n; cin >> n;
    string arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    Solution ob;
    cout << ob.secFrequent (arr, n);
}