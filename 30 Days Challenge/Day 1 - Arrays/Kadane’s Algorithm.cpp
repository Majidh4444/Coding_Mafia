// -2,1,-3,4,-1,2,1,-5,4
// Check sum+nums[i] < nums[i] then there is a lot dude to previous sum
// So consider now sum as nums[i]
// everytime check sum with maxSum

class Solution {
public:
    int maxSubArray(vector<int>& nums){
        int n = nums.size();
        int maxSum = nums[0];
        int sum = nums[0];
        
        for(int i=1;i<n;i++){
            if(nums[i]+sum >= nums[i]) sum = nums[i]+sum;
            else sum = nums[i];
            if(maxSum < sum) maxSum = sum;
        }
        return maxSum;
    }
};