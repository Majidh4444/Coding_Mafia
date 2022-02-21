#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> singleNumber(vector<int> nums){
        vector<int> v;
        int XoR = 0;
        
        for(int i=0;i<nums.size();i++){
            XoR = XoR^nums[i];
        }
        
        int LSB = XoR&(-XoR);
        
        int a=0, b=0;
        
        for(int i=0;i<nums.size();i++){
            if((LSB&nums[i]) == 0) a = a^nums[i];
            else b = b^nums[i];
        }
        
        if(a<b) return {a,b};
        else return {b,a};
    }
};

int main(){
    int n; 
    cin >> n;
    vector<int> v(2 * n + 2);
    for(int i = 0; i < 2 * n + 2; i++)
        cin >> v[i];
    Solution ob;
    vector<int > ans = ob.singleNumber(v);
    for(auto i: ans)
        cout << i << " ";
	return 0;
}