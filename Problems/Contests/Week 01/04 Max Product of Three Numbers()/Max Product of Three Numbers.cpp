#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> nums = {-1,5,4,9,2};
	sort(nums.begin(), nums.end());
    int n=nums.size();
    int res = nums[n-1] * nums[n-2] * nums[n-3];
    res= max(res, nums[n-1] * nums[1] * nums[0]);
    cout<<res;
	return 0;
}

