// Same as before case but here use two variables and also first equate variable1 = nums[0] and variable2 = INT_MIN

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 1, count2 = 0;
        int temp1 = nums[0],  temp2 = INT_MIN;
        for(int i=1;i<nums.size();i++){
            if(temp1 == nums[i]){
                count1++;
            }else if(temp2 == nums[i]){
                count2++;
            }else if(count1 == 0){
                temp1 = nums[i];
                count1++;
            }else if(count2 == 0){
                temp2 = nums[i];
                count2++;
            }else{
                count1--;count2--;
            }
        }
        
        count1=0;count2=0;
        
        for(int i=0;i<nums.size();i++){
            if(temp1 == nums[i]) count1++;
            else if(temp2 == nums[i]) count2++;
        }
        
        
        vector<int> v;
        
        if(count1 > (nums.size()/3)) v.push_back(temp1);
        if(count2 > (nums.size()/3)) v.push_back(temp2);
        return v;
    }
};