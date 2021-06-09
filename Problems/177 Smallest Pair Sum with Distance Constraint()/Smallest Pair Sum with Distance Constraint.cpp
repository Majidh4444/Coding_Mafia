#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> nums = {0,3,3,0};
	int min = INT_MAX;
    for(int i=2;i<nums.size();i++){
        if(nums[i-2]+nums[i]<min) min = nums[i-2]+nums[i];
        if(nums[i-1]>nums[i-2]) nums[i-1]=nums[i-2];
    }
    cout<<min<<endl;
    return min;
	return 0;
}

