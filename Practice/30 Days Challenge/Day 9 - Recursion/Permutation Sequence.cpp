// Check the solution and understand

class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> nums;
        for(int i=1;i<=n;i++) nums.push_back(i);
        int fac = 1;
        for(int i=2;i<=n;i++) fac *= i;
        string ans = "";
        k--;
        while(ans.size() != n){
            int x = fac/nums.size();
            ans += (to_string(nums[k/x]));
            fac /= nums.size();
            nums.erase(nums.begin()+k/x);
            k %= x;
        }
        return ans;
    }
};