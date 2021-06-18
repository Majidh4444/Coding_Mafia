#include<bits/stdc++.h>
using namespace std;


bool containsDuplicate(vector<int>& nums) {
    unordered_map<int,int> um;
    for(int i=0;i<nums.size();i++){
        if(um.find(nums[i]) != um.end()) return true;
        um[nums[i]] = 1;
    }
    return false;
}
 
int main(){
	vector<int> nums = {1,1,1,3,3,4,3,2,4,2};
	cout<<containsDuplicate(nums);
	return 0;
}
