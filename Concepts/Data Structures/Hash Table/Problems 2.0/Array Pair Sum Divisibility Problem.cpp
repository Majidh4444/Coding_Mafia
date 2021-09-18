#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        if(nums.size()%2 != 0) return false;
        
         unordered_map<int,int> freq;
         for(auto e : nums) freq[(e%k)]++;
         
         //for(auto it: freq) cout<<it.first<<" "<<it.second<<endl;
         
         for(int i=0;i<nums.size();i++){
             int rem = (nums[i]%k);
             
             if(rem == 0 || (2*rem)==k){
                 if(freq[rem]%2 != 0) return false;
             }else if(freq[rem] != freq[k-rem]) return false;
             
         }
         
         return true;
    }
};

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++) cin >> nums[i];
    Solution ob;
    bool ans = ob.canPair(nums, k);
    if (ans) cout<<"True";
    else cout<<"False";
    return 0;
}