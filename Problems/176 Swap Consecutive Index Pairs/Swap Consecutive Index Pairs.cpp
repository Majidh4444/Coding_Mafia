vector<int> solve(vector<int>& nums) {
    vector<int> v;
    int l = nums.size();
    for(int i=0;i<l-1;i+=4){
        int t = nums[i];
        nums[i] = nums[i+2];
        nums[i+2] = t;
    }
    for(int i=1;i<l-1;i+=4){
        int t = nums[i];
        nums[i] = nums[i+2];
        nums[i+2] = t;
    }
    return nums;
}
