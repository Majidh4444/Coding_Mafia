#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        unordered_map<string,vector<string>> m;
        string str;
        for(int i=0;i<string_list.size();i++){
            str = string_list[i];
            sort(str.begin(),str.end());
            m[str].push_back(string_list[i]);
        }
        
        vector<vector<string>> s;
        for(auto it=m.begin();it!=m.end();it++){
            s.push_back(it->second);
        }
        return s;
    }
};

int main(){
    int n;
    cin>>n;
    vector<string> string_list(n);
    for (int i = 0; i < n; ++i)
        cin>>string_list[i]; 
    Solution ob;
    vector<vector<string> > result = ob.Anagrams(string_list);
    sort(result.begin(),result.end());
    for (int i = 0; i < result.size(); i++){
        for(int j=0; j < result[i].size(); j++) cout<<result[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}