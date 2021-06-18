#include<bits/stdc++.h>
using namespace std;


bool containsDuplicate(vector<int>& nums) {
	set<int> s;
	for(int i=0;i<nums.size();i++) s.insert(nums[i]);
	if(s.size() == nums.size()) return false;
	return true;
}
 
int main(){
	vector<int> nums = {1,1,1,3,3,4,3,2,4,2};
	cout<<containsDuplicate(nums);
	return 0;
}
