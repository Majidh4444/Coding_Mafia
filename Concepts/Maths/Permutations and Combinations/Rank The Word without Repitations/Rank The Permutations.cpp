#include <bits/stdc++.h>
using namespace std;

bool rankP(string S, string A, string str, int* ans){
    if(str == "") (*ans)++;
    if(A == S) return true;
    for(int i=0;i<str.size();i++){
        *ans = (*ans)%1000003;
        string sub = str;
        if(rankP(S,A+str[i],sub.erase(i,1),ans)) return true;
    }
    return false;
}

int ranking(string S){
    int l = S.size();
    set<char> st;
    for(int i=0;i<S.size();i++) st.insert(S[i]);
    if(st.size() != l) return 0;
    string A = "";
    int ans = 0;
    string str = S;
    sort(str.begin(),str.end());
    rankP(S,A,str,&ans);
    return ans;
}

int main(){
	string S;
	cout<<"Enter the word without repitations to find rank: ";
	getline(cin,S);
	cout<<ranking(S);
	return 0;
}

