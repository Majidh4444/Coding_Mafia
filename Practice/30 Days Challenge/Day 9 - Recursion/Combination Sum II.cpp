// 2 3 6 7
// from 0 using faor loop
//     call recursion considering for 2, 3, 6, 7 to sum
//     skip considering repeating elements after usig them atleast once 
// at every iteration push c[j] to vector after recursion pop back

class Solution {
public:
    void rec(vector<int> c, vector<vector<int>>& v, vector<int> s, int target, int i){
        if(target == 0) v.push_back(s);
        else{
            for(int j=i+1;j<c.size();j++){
                if(target-c[j] < 0) continue;
                s.push_back(c[j]);
                rec(c,v,s,target-c[j],j);
                s.pop_back();
                while(j+1<c.size() && c[j] == c[j+1]) j++;
            }                        
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
        vector<vector<int>> v;
        sort(c.begin(),c.end());
        rec(c,v,{},target,-1);
        return v;
    }
};