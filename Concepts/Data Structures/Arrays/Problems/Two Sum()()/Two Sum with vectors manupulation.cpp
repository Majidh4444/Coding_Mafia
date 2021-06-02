#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector <int> nums = {3,2,4};
	int target = 6;
	vector <int> v;
    for(int i=0;i<nums.size();i++){
        int d = target-nums[i];
        auto a = find(nums.begin(),nums.end(),d);
        d = distance(nums.begin(),a);
        if(a != nums.end() && d!=i){
            v.push_back(i);
            v.push_back(d);
            cout<<v[0]<<" "<<v[1]<<endl;
            break;
        }
    }
	return 0;
}

