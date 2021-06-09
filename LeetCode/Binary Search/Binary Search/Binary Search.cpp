#include <iostream>
#include <ctype.h>
#include <algorithm>
using namespace std;



int search(vector<int>& nums, int target) {
    int l = nums.size();
    int low = 0;
    int high = l-1;
    int mid;
    while(low<=high){
        mid = ((high-low)/2)+low;
        if(nums[mid] == target) return mid;
        else if(nums[mid] > target) high = mid-1;
        else low = mid+1;
    }
    return -1;
}


int main() {
	vector<int> nums = {-1,0,3,5,9,12};
	int target = 9;
	cout<<search(nums,target);
	return 0;
}
