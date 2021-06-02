#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int l = digits.size();
    if(digits[l-1]<9){
        digits[l-1]++;
        return digits;
    }
    for(int i=l-1;i>=0;i--){
        if(digits[i]==9){
            digits[i]=0;
        }else{
            digits[i]++;
            return digits;
        }
    }
    vector<int> v;
    v.push_back(1);
    for(int i=0;i<l;i++){
        v.push_back(0);
    }
    return v;
}


int main() {
	vector <int> nums = {9,9,9,9};
	nums=plusOne(nums);
	for(int i=0;i<nums.size();i++) cout<<nums[i]<<" ";
	return 0;
}
