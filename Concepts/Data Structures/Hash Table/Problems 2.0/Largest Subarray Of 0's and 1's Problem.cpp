#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int maxLen(int arr[], int N){
        for(int i=0;i<N;i++) arr[i]=(arr[i] == 0)?-1:1;
        
        unordered_map<int,int> m;
        int t = 0;
        int maxLength = 0;
        
        for(int i=0;i<N;i++){
            t += arr[i];
            if(t == 0) maxLength = i+1;   
            if(m.find(t) == m.end()) m[t] = i;
            else maxLength = max(maxLength,i-m[t]);
        }
        return maxLength;
    }
};

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Solution obj;
    cout << obj.maxLen(a, n);   
    return 0;
}