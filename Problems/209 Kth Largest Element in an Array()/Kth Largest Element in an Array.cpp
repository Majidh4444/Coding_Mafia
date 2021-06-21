#include<bits/stdc++.h> 
using namespace std;



int findKthLargest(vector<int>& nums, int k) {
     priority_queue<int,vector<int>,greater<int>> q;
    for(int i = 0;i<nums.size();i++){
        q.push(nums[i]);
        if(q.size() > k){
            q.pop();
        }
    }
    return q.top();
}



int main(){
	vector<int> nums = {3,2,1,5,6,4};
	int k = 2;
	cout<<findKthLargest(nums,k);
	return 0;
}
