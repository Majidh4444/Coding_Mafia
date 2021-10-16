#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);

int32_t main(){
    string s; cin >> s;
    cout << minFlips (s);
    return 0;
}

int minFlips (string S){
    int countA = 0;
    int countB = 0;
    
    for(int i=0;i<S.size();i+=2){
        if(S[i] != '0') countA++;
        if(i+1<S.size() && S[i+1] != '1') countA++;
        
        if(S[i] != '1') countB++;
        if(i+1<S.size() && S[i+1] != '0') countB++;
    }
    
    return min(countA,countB);
}