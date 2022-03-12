// use while loop to find continous 1s and store max of that to return

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m = 0;
        int n = nums.size();
        if(n==1 && nums[0]==1) return 1;
        int i=0;
        int count = 0;
        while(i<n){
            count = 1;
            if(nums[i] == 0) i++;
            else{
                while(i<n-1 && nums[i] == nums[i+1]){
                    i++;count++;
                }
                m = max(m, count);
                i++;
            }
        }
        return m;
    }
};