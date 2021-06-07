#include <iostream>
#include <vector>
using namespace std;



void moveZeroes(vector<int>& nums) {
    int i=0,j=0;
    while(j<nums.size()){
        if(nums[j]!=0){
            nums[i] = nums[j];
            j++;
            i++;
            continue;
        }
        j++;
    }
    while(i<nums.size()){
        nums[i] = 0;
        i++;
    }
}

int main() {
	vector<int> v = {0,1,0,3,12};
	moveZeroes(v);
	for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
	return 0;
}
