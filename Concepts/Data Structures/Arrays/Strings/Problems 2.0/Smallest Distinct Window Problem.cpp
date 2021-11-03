#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string findSubString(string str){
        unordered_map<char,int> m;
        unordered_set<char> s;
        for(int i=0;i<str.size();i++) s.insert(str[i]);
        int l = s.size();
        int miN = INT_MAX;
        
        int i=0, j=0, c=0;
        
        while(j<l){
            if(m[str[j]] == 0) c++;
            m[str[j]]++;
            j++;
        }
        
        if(c == l) return str.substr(0,l);
        
        while(j<str.size()){
            if(m[str[j]] == 0) c++;
            m[str[j]]++;
            while(m[str[i]] > 1){
                m[str[i]]--;
                i++;
            }
            if(c == l && j-i+1 < miN) miN = j-i+1;
            j++;
        }
        
        return str.substr(0,miN);
    }
};

int main() {
    string str;
    cin >> str;
    Solution ob;
    cout << ob.findSubString(str).size();
    return 0;
}