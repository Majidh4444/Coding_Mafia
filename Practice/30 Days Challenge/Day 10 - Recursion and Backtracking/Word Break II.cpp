// use unordered_set to store dictionary words
// if index reached end store required string and return
// else use for loop to check sub strings from ind to end and if present in set
//      and that to required string and make recursion from next index and continue this

class Solution {
public:
    void rec(string s, vector<string>& v, string str, unordered_set<string> st, int ind){
        if(ind == s.size()){
            str.pop_back();
            v.push_back(str);
            return;
        }
        string x;
        for(int i =ind;i<s.size();i++){
            x = s.substr(ind, i-ind+1);
            if(st.count(x) == 1){
                rec(s,v,str+x+" ",st, i+1);
            }
        }
    }
    
    
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st(wordDict.begin(), wordDict.end());
        vector<string> v;
        rec(s, v, "", st, 0);
        return v;
    }
};