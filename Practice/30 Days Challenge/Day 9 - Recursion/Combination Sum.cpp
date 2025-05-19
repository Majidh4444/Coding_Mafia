// 2 3 6 7
// from 0 using faor loop
//  call recursion considering for 2, 3, 6, 7 to sum
// at every iteration push c[j] to vector after recursion pop back

class Solution {
public:

    void rec(vector<int> c, vector<vector<int>>& v, vector<int> s, int target, int i){
        if(target == 0) v.push_back(s);     
        else if(target < 0) return;
        else{
            for(int j=i;j<c.size();j++){
                s.push_back(c[j]);
                rec(c,v,s,target-c[j],j);
                s.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        vector<vector<int>> v;
        rec(c,v,{},target,0);
        return v;
    }
};