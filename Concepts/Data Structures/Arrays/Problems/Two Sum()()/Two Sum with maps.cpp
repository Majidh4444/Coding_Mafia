#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main() {
	vector <int> nums = {3,2,4};
	int target = 6;
	map <int,int> m;
    vector<int> v;
    for(int i=0;i<nums.size();i++){
        if(m.find(target-nums[i])!=m.end()){
            v.push_back(m[target-nums[i]]);
            v.push_back(i);
            break;
        }
        m[nums[i]] = i;
    }
    cout<<v[0]<<" "<<v[1];
}

