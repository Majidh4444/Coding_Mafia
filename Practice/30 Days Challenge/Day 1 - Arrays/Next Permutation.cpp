// 859764:
//          9
// 8       / \
//  \     /   7
//   \   /     \
//    \ /       6
//     5         \
//                4
// From end find first decrement element => 5
// Among number after 5 find just greater element then 5=> 6 (not 4)
// swap them => 869754
// sort elements after 6 => 864579

class Solution {
public:
    void nextPermutation(vector<int>& nums){
        int n = nums.size();
        
        int i = n-1;
        while(i>0){
            if(nums[i-1] < nums[i]) break;
            i--;
        }
        int x = -1;
        if(i>0){
            x = i-1;
            int index = i;
            while(i<n){
                if(nums[index] > nums[i] && nums[i] > nums[x]) index = i;
                i++;
            }
            swap(nums[x], nums[index]);
        }
        sort(nums.begin()+x+1, nums.end());
        
    }
};