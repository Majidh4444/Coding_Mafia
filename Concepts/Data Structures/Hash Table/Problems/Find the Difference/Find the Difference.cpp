#include<bits/stdc++.h>
using namespace std;


char findTheDifference(string s, string t) {
    unordered_map<char,int> um;
    for(int i=0;i<s.length();i++){
        if(um.find(s[i]) != um.end()) um[s[i]]++;
        else um[s[i]] = 1;
    }
    for(int i=0;i<t.length();i++){
        um[t[i]]--;
        if(um[t[i]] < 0) return t[i];
    }
    return 'a';
}
 
int main(){
	string s,t;
	cout<<"Enter Two Strings which have to get checked"<<endl;
	cout<<"String One: ";
	cin>>s;
	cout<<"String Two: ";
	cin>>t;
	cout<<findTheDifference(s,t);
	return 0;
}
