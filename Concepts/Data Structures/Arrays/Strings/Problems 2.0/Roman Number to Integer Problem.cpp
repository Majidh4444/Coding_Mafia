#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int romanToDecimal(string &str) {
        unordered_map<char, int> m;
        m.insert({ 'I', 1 });
        m.insert({ 'V', 5 });
        m.insert({ 'X', 10 });
        m.insert({ 'L', 50 });
        m.insert({ 'C', 100 });
        m.insert({ 'D', 500 });
        m.insert({ 'M', 1000 });
        
        int num = 0;
        
        for(int i=0;i<str.size();i++){
            if(m[str[i]] < m[str[i+1]]){
                num += m[str[i+1]] - m[str[i]];
                i++;
            }else num += m[str[i]];
        }
        return num;
    }
};

int main() {
    string s;
    cin >> s;
    Solution ob;
    cout << ob.romanToDecimal(s);
}