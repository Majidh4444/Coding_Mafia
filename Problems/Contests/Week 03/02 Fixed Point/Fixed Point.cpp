#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums) {
    for(int i=0;i<nums.size();i++){
        if(i==nums[i]) return i;
    }
    return -1;
}
 
int main(){
	
	vector<int> v = {-5, -2, 0, 3, 4};
	cout<<solve(v);
	return 0;
}
