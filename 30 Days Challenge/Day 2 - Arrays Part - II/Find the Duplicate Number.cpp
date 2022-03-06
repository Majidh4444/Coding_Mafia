// Change sign of number in nums[i] index
// If we get nums[i] < 0 then return nums[i]

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])] > 0) nums[abs(nums[i])]*=-1;
            else return abs(nums[i]);
        }
        return 0;
    }
};