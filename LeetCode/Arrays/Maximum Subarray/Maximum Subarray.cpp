#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
	int l = nums.size();
    if(l==1) return nums[0];
    int m = nums[0];
    for(int i=1;i<l;i++){
        nums[i] = (nums[i]>(nums[i]+nums[i-1]))?nums[i]:(nums[i]+nums[i-1]);
        m = (nums[i]>m)?nums[i]:m;
    }
    return m;
}


int main() {
	vector <int> nums = {5,4,-1,7,8};
	int s=maxSubArray(nums);
	cout<<s;
	return 0;
}
