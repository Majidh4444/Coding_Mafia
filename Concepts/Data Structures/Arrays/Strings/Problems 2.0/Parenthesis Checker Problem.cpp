#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool ispar(string x){
        stack<char> s;        
        for(int i=0;i<x.size();i++){
            if(x[i] == '{' || x[i] == '[' || x[i] == '(') s.push(x[i]);
            else{
                if(s.empty()) return false;
                if(x[i] == '}' && s.top() != '{') return false;
                if(x[i] == ']' && s.top() != '[') return false;
                if(x[i] == ')' && s.top() != '(') return false;
                s.pop();
            }
        }
        if(!s.empty()) return false;
        return true;
    }

};

int main(){
    string a;
    cin>>a;
    Solution obj;
    if(obj.ispar(a)) cout<<"balanced";
    else cout<<"not balanced";
    return 0;
}