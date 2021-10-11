#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string longestPalin(string S) {
        if(S.size()<=1) return S;
        
        int l = S.size();
        int maxLength = 1;
        int ind = 0;
        
        for(int i=0;i<l;i++){
            int st = i, ed = i;
            
            while(st>=0 && ed<l){
                if(S[st] == S[ed]){
                    st--;ed++;
                }else break;
            }
            int len = ed-st-1;
            if(len>maxLength){
                maxLength = len;
                ind = st+1;
            }
        }
        
        for(int i=0;i<l;i++){
            int st = i, ed = i+1;
            
            while(st>=0 && ed<l){
                if(S[st] == S[ed]){
                    st--;ed++;
                }else break;
            }
            int len = ed-st-1;
            if(len>maxLength){
                maxLength = len;
                ind = st+1;
            }
        }
        
        return S.substr(ind,maxLength);
    }
};

int main(){
        string S; cin >> S;
        Solution ob;
        cout << ob.longestPalin(S);
        return 0;
}