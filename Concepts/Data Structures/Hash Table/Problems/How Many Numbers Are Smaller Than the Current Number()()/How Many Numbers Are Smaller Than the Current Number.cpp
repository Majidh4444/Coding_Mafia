#include<bits/stdc++.h>
using namespace std;


vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<pair<int,int>> ht;
    vector<int> v(nums.size(),0);
    for(int i=0;i<nums.size();i++) ht.push_back({nums[i],i});
    sort(ht.begin(),ht.end());
    for(int i=0;i<ht.size();i++){
        v[ht[i].second] = i;
        int t = i;
        while(i+1<ht.size() && ht[i].first == ht[i+1].first){
            i++;
            v[ht[i].second] = t;
        }
    }
    return v;
}
 
int main(){
	vector<int> nums = {6,3,7,6,9};
	vector<int> v = smallerNumbersThanCurrent(nums);
	for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
	return 0;
}
