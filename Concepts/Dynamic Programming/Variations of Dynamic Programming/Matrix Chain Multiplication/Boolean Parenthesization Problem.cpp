#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    unordered_map<string,int> m;
    
    int countWaysDP(int l, int r, string S, bool V){
        //Base Condition
        if(l>r) return 0;
        if(l == r){
            if(V == true) return S[l] == 'T';
            else return S[l] == 'F';
        }
        
        string req = to_string(l)+' '+to_string(r)+' '+to_string(V);
        if(m.find(req) != m.end()) return m[req];
        
        int result = 0;
        
        for(int k = l+1;k<r;k=k+2){
            int leftTrue = countWaysDP(l,k-1,S,true);
            int leftFalse = countWaysDP(l,k-1,S,false);
            int rightTrue = countWaysDP(k+1,r,S,true);
            int rightFalse = countWaysDP(k+1,r,S,false);
            
            
            if(V == true){
                if(S[k] == '&'){
                    result = result + (leftTrue*rightTrue);
                }else if(S[k] == '|'){
                    result = result + (leftTrue*rightTrue) + (leftFalse*rightTrue) + (leftTrue*rightFalse);
                }else if(S[k] == '^'){
                    result = result + (leftTrue*rightFalse) + (leftFalse*rightTrue);
                }
            }else{
                if(S[k] == '&'){
                    result = result + (leftTrue*rightFalse) + (leftFalse*rightTrue) + (leftFalse*rightFalse);
                }else if(S[k] == '|'){
                    result = result + (leftFalse*rightFalse);
                }else if(S[k] == '^'){
                    result = result + (leftTrue*rightTrue) + (leftFalse*rightFalse);
                }
            }
            
        }
        m[req] = result%1003;
        return m[req];
    }

    int countWays(int N, string S){
        return countWaysDP(0,N-1,S,true);
    }
};

int main(){

    int N;
    cin>>N;
    string S;
    cin>>S;
    
    Solution ob;
    cout<<ob.countWays(N, S);
    return 0;
} 