// for(int j=i;j<s.size();j++){
//     if(isPalindrome(s.substr(i,j-i+1))){
//         sub.push_back(s.substr(i,j-i+1));
//         rec(ans,sub,j+1,s);
//         sub.pop_back();
//     }
// }

class Solution {
public:
    bool isPalindrome(string s){
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;j--;
        }
        return true;
    }
    
    void rec(vector<vector<string>>& ans, vector<string> sub, int i, string s){
        if(i == s.size()){
            ans.push_back(sub);
            return;
        }
        
        for(int j=i;j<s.size();j++){
            if(isPalindrome(s.substr(i,j-i+1))){
                sub.push_back(s.substr(i,j-i+1));
                rec(ans,sub,j+1,s);
                sub.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        rec(ans,{},0,s);
        return ans;
    }
};