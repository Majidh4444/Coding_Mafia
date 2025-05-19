// while(i<n)
// use two pointer i j to swap only unique values at the starting

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 1;
        int i=0,j=0;
        
        while(i<n){
            while(i<n-1 && nums[i] == nums[i+1]) i++;
            swap(nums[j], nums[i]);
            i++;j++;
        }
        return j;
    }
};