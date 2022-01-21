class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int l = nums.size();
        int i = l-1;
        while(i > 0){
            if(nums[i-1] < nums[i]) break;
            i--;
        }
        if(i == 0) sort(nums.begin(), nums.end());
        else{
            int num = nums[i-1];
            int j = i;
            int ind = i;
            while(j<l){
                if(nums[j] > num && nums[j] < nums[ind]) ind = j;
                j++;
            }
            nums[i-1] = nums[ind];
            nums[ind] = num;
            sort(nums.begin()+i,nums.end());
        }
    }
};