#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    unordered_map<string,int> DP;
    
    int wordBreakDP(string A, vector<string>& B){
        if(A.size() == 0) return 1;
        if(DP[A] != 0) return DP[A];
        
        for(int i=1;i<=A.size();i++){
            string str = A.substr(0,i);
            if(find(B.begin(),B.end(),str) != B.end()){
                if(wordBreakDP(A.substr(i,A.size()-i),B) == 1){
                    DP[A] = 1;
                    return DP[A];   
                }
            }
        }
        DP[A] = -1;
        return DP[A];
    }
    
    int wordBreak(string A, vector<string> &B) {
        if(wordBreakDP(A,B)==1) return 1;
        return 0;
    }
};

int main(){
    int n;
    cin>>n;
    vector<string> dict;
    for(int i=0;i<n;i++){
        string S;
        cin>>S;
        dict.push_back(S);
    }
    string line;
    cin>>line;
    Solution ob;
    cout<<ob.wordBreak(line, dict);
}