#include<bits/stdc++.h>
using namespace std;


bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int,int> um;
    for(int i=0;i<nums.size();i++){
        if(um.find(nums[i]) != um.end() && abs(i-um[nums[i]])<=k ) return true;
        um[nums[i]] = i;
    }
    return false;
    
    //O(Nlog(N))
    // vector<pair<int,int>> v;
    // for(int i=0;i<nums.size();i++) v.push_back({nums[i],i});
    // sort(v.begin(),v.end());
    // for(int i=0;i<v.size()-1;i++){
    //     if(v[i].first == v[i+1].first && abs(v[i].second - v[i+1].second) <=k) return true;
    // }
    // return false;
}
 
int main(){
	vector<int> nums = {1,2,3,1};
	int k = 3;
	cout<<containsNearbyDuplicate(nums,k);
	return 0;
}
