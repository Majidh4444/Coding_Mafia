class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int s = nums.size();
        if(s==1) return;
        int i = s-2,j = s-1;
        while(i>=0){
            if(nums[i]<nums[i+1]) break;
            i--;
        }
        if(i==-1){
            sort(nums.begin(),nums.end());
            return;
        }
        while(j>=0){
            if(nums[j]>nums[i]){
                swap(nums[j],nums[i]);
                break;
            }else{
                j--;
            }
        }
        sort(nums.begin()+i+1,nums.end());
    }
};
