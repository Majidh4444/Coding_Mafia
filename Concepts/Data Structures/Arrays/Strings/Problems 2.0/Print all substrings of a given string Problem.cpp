#include<bits/stdc++.h>
using namespace std;

vector<string> printAllSubStrings(string S){
    vector<string> V;
    for(int i=1;i<=S.size();i++){
        for(int j=0;j<=S.size()-i;j++){
            V.push_back(S.substr(j,i));
        }
    }
    return V;
}

int main(){
        string S;
        cin>>S;
        vector<string> V; 
        V = printAllSubStrings(S);
        for(auto i : V) cout<<i<<endl;
        return 0;
}