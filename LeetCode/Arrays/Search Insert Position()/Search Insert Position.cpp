#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
//     int f = 0;
//     int mid,a;
//     int l = nums.size()-1;
//     while(l>=f){
//         mid = (l+f)/2;
//         if(nums[mid]==target) return mid;
//         else if(nums[mid]<target){
//             f = mid+1;
//         }else{
//             l = mid-1;
//             a=mid;
//         }
//     }
//     return a;
    auto e = nums.end();
    auto b = nums.begin();
    for(auto it=b;it!=e;it++){
        if(*(it)>=target){
            return it-b;
        }
    }
    return e-b;
}


int main() {
	vector <int> nums = {1,3,5,6};
	int t = 7;
	int l=searchInsert(nums,t);
	cout<<l;
	return 0;
}

