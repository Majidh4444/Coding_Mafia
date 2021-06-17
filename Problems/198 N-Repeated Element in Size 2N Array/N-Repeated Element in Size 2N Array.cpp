#include<bits/stdc++.h>
using namespace std;

int repeatedNTimes(vector<int>& nums) {
    unordered_map<int,int> um;
    int l = nums.size();
    for(int i=0;i<l;i++){
        if(um.find(nums[i]) == um.end()) um[nums[i]] = 1;
        else{
            um[nums[i]]++;
            if(um[nums[i]] == (l/2))  return nums[i];
        }
    }
    return 0;
}
 
int main(){
	vector<int> v = {5,1,5,2,5,3,5,4};
	cout<<repeatedNTimes(v);
	return 0;
}
