#include<bits/stdc++.h>
using namespace std;


int singleNumber(vector<int>& nums) {
//    sort(nums.begin(),nums.end());
//    for(int i=0;i<nums.size();i++){
//        if(i+1<nums.size() && nums[i] == nums[i+1]) i++;
//        else return nums[i];
//    }
//    return nums[nums.size()-1];
    
    
    int res = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        res = res xor nums[i];
    }
    return res;
}
 
int main(){
	vector<int> nums = {4,1,2,1,2};
	cout<<singleNumber(nums);
	return 0;
}
