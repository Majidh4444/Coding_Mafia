// Use recursion
// Make call without considering and after considering element

class Solution {
public:
    void rec(set<vector<int>>& s, vector<int> v, vector<int> nums, int i){
        if(i>=nums.size()) return;
        rec(s,v,nums,i+1);
        v.push_back(nums[i]);
        s.insert(v);
        rec(s,v,nums,i+1);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        set<vector<int>> s;
        v.push_back({});
        rec(s,{},nums,0);
        for(auto i:s) v.push_back(i);
        return v;
    }
};