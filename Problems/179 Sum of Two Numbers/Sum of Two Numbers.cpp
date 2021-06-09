bool solve(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int i=0, j=nums.size()-1;
    while(i<j)
    {
        if(nums[i]+nums[j] == k)
            return true;
        else if(nums[i]+nums[j] < k)
            i++;
        else
            j--;
    }
    return false;
}
