#include <iostream>
#include <algorithm>
#include <vector>
#include<map>
using namespace std;

int majorityElement(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int m=1;
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]) m++;
        else{
            if(m>(nums.size()/2)) return nums[i];
            m=1;
        }
    }
    return nums[nums.size()-1];
}

int main() {
	vector <int> nums = {2,2,1,1,1,2,2};
	int a = majorityElement(nums);
	cout<<a;
	return 0;
}
