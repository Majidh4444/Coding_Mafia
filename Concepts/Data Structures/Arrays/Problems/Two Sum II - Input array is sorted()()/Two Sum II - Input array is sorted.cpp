#include <iostream>
#include <algorithm>
#include <vector>
#include<map>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
//    map<int,int> m;
//    vector<int> v;
//    int i=0;
//    for(int i=0;i<numbers.size();i++){
//        if(m.find(target-numbers[i])==m.end()){
//            m[numbers[i]]=i;
//        }else{
//            if(i<m[target-numbers[i]]){
//                v.push_back(i+1);
//                v.push_back(m[target-numbers[i]]+1);
//                break;
//            }else{
//                v.push_back(m[target-numbers[i]]+1);
//                v.push_back(i+1);
//                break;
//            }
//        }
//    }
//    return v;



    //BEST SOLUTION
    int i = 0;
    int j = numbers.size() - 1;
    while (j > i){
        if (numbers[j] + numbers[i] > target) j--;
        else if (numbers[j] + numbers[i] < target) i++;
        else return vector<int>{i+1,j+1};
    }
    return {};

}




int main() {
	vector <int> nums = {2,7,11,15};
	int target = 9;
	vector<int> v = twoSum(nums,target);
	cout<<v[0]<<" "<<v[1];
	return 0;
}
