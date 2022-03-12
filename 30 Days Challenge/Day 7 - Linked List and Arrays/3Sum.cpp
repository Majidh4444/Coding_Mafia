// Sort the array
// -1 -1 -1 -1 0 2
// for loop
// if(i>0 && nums[i-1] == nums[i]) continue
// int j=i+1 and z = n-1
// while(j<z) 
// check there sum == 0
//   push
// 	 while(j<z && nums[j]==nums[j+1]) j++
//   while(j<z && nums[j]==nums[j+1]) z--
//   j++;z--
// sum < 0 j++
// sum > 0 z--
// return v


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return {};
        sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        
        for(int i=0;i<n;i++){
            if(i>0 && nums[i-1] == nums[i]) continue;
            int j = i+1, z = n-1;
            while(j<z){
                if(nums[i]+nums[j]+nums[z] == 0){
                    v.push_back({nums[i],nums[j],nums[z]});
                    while(j<z && nums[j] == nums[j+1]) j++;
                    while(j<z && nums[z] == nums[z-1]) z--;
                    j++;z--;
                }
                else if(nums[i]+nums[j]+nums[z] > 0) z--;
                else if(nums[i]+nums[j]+nums[z] < 0) j++;
            }
        }
        return v;
    }
};