int solve(vector<int>& nums) {
    if(nums.size() == 0) return 0;
    sort(nums.begin(),nums.end());
    int m=0,c=1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==nums[i+1]){
            c++;
        }else{
            m = max(m,c);
            c = 1;
        }
    }
    m = max(m,c-1);
    return m;
}
