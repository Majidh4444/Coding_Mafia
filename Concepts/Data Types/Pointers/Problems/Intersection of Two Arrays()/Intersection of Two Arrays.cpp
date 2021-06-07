#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    vector<int> v;
    int i=0,j=0;
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i] == nums2[j]){
            if(find(v.begin(),v.end(),nums1[i]) == v.end()){
                v.push_back(nums1[i]);
            }
            i++;j++;
        }else if(nums1[i] > nums2[j]) j++;
        else i++;
    }
    return v;
}

int main() {
	vector<int> nums1 = {4,9,5};
	vector<int> nums2 = {9,4,9,8,4};
	nums1 = intersection(nums1,nums2);
	for(int i=0;i<nums1.size();i++) cout<<nums1[i]<<" ";
	return 0;
}
