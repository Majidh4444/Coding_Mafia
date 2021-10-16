#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if(strs.size() == 0) return "";
    sort(strs.begin(),strs.end());
    string a = strs[0];
    string b = strs[strs.size()-1];
    
    int i=0;
    while(1){
        if(a[i] != b[i]) break;
        if(a[i] == '\0' || b[i] == '\0') break;
        i++;
    }
    
    return a.substr(0,i);
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    cout<<longestCommonPrefix(strs);
    return 0;
}