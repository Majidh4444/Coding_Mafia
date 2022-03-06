// use x for interate nums, i for 0s, j for 2s
// if nums[x] == 2 swap nums[j] and nums[x] here after swapping nums[x] can be 0 or 1 or 2
// So have to check nums[x] again
// if nums[x] == 0 swap nums[i] and nums[x] here after swapping nums[x] can be 1 no 0s 2s because they are already swapped
// so no need to check nums[x] again

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int x = 0;
        while(x<=j){
            if(nums[x] == 2){
                swap(nums[x], nums[j]);
                j--;
                continue;
            }else if(nums[x] == 0){
                swap(nums[x], nums[i]);
                i++;
            }
            x++;
        }
    }
};