// use two pointers
// find first block on both sides
// while(l<=r)
// 	if lblock <= rblock
// 		if(nums[l]>lblock) lblock = nums[l]
// 		else water += lblock-nums[l]
// 		l++
// 	else
// 		if(nums[r]>rblock) rblock = nums[r]
// 		else water += rblock-nums[r]	
// return water

class Solution {
public:
    int trap(vector<int>& height){
        int water = 0;
        int n = height.size();
        if(n == 1) return 0;
        int l = 0, r = n-1;
        while(l<n && height[l]==0) l++;
        while(r>=0 && height[r]==0) r--;
        int lblock = height[l], rblock = height[r];
        l++;r--;
        while(l<=r){
            if(lblock <= rblock){
                if(height[l] >= lblock) lblock = height[l];
                else water += (lblock - height[l]);
                l++;
            }else{
                if(height[r] >= rblock) rblock = height[r];
                else water += (rblock - height[r]);
                r--;
            }
        }
        return water;
    }
};