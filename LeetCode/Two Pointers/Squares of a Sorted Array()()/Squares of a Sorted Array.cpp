#include <iostream>
#include <vector>
using namespace std;



vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n);
    int s = 0, e = n - 1, idx = n - 1;
    while(s <= e){
        if(abs(nums[s]) < abs(nums[e])){
            res[idx--] = nums[e] * nums[e];
            e--;
        }else{
            res[idx--] = nums[s] * nums[s];
            s++;
        }
    }
    return res;
}

int main() {
	vector<int> nums = {-4,-1,0,3,10};
	nums = sortedSquares(nums);
	for(int i=0;i<nums.size();i++) cout<<nums[i]<<" ";
	return 0;
}
