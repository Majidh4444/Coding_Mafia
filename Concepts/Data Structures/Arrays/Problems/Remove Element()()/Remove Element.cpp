#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int a = nums.size();
    if(a==0) return 0;
    auto b = nums.begin();
    auto e = nums.end()-1;
    for(auto it = e;it>=b;it--){
        if(val==*(it)){
            *(it) = *(e);
            e--;
            a--;
        }
    }
    return a;
}


int main() {
	vector <int> nums = {0,1,1,2,3,4,4,2,5};
	int n = 2;
	int l=removeElement(nums,2);
	for(int i=0;i<l;i++) cout<<nums[i]<<" ";
	return 0;
}

