class Solution {
public:
    string change(string s){
        string ans = "";
        int c=1;
        for(int i=0;i<s.size();i++){
            if(s[i+1]==s[i]) c++;
            else{
                ans = ans + (to_string(c)+s[i]);
                c = 1;
            }
        }
        return ans;
    }
    
    string countAndSay(int n) {
        string ans = "1";
        for(int i=2;i<=n;i++) ans = change(ans);
        return ans;
    }
};
