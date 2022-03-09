// Sort the array
// use two nested for loops to select first two numbers
// then using two pointer in while loop find other two numbers

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> v;
        set<vector<int>> s;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int new_target = target- nums[i]-nums[j];
                int x = j+1, y = n-1;
                while(x<y){
                    if(nums[x]+nums[y] > new_target) y--;
                    else if(nums[x]+nums[y] < new_target) x++;
                    else{
                        s.insert({nums[i], nums[j], nums[x], nums[y]});
                        x++;y--;
                    }
                }
            }
        }
        
        for(auto i: s) v.push_back(i);
        return v;
    };
};