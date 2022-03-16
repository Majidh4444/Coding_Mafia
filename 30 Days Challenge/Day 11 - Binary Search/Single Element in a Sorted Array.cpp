// use binary search
// after finding mid...check l-mid is even or not
// according to it check the conditions nums[m-1] == nums[m] and nums[m] == nums[m+1]

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
        
        while(l<r){
            int m = l + (r-l)/2;
            bool isEven = (r-m)%2==0;
            if(nums[m-1] == nums[m]){
                if(isEven) r = m-2;
                else l = m+1;
            }else if(nums[m] == nums[m+1]){
                if(isEven) l = m+2;
                else r = m-1;
            }else return nums[m];
        }
        return nums[l];
    }
};