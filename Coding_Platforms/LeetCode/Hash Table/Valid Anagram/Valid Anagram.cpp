#include<bits/stdc++.h>
using namespace std;


bool isAnagram(string s, string t) {
    if(s.size()!=t.size())
        return false;
    vector<int>sf(26,0);
    vector<int>tf(26,0);
    for(int i=0;i<s.size();i++){
        sf[s[i]-'a']++;
        tf[t[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(sf[i]!=tf[i])
            return false;
    }
    return true;
}
 
int main(){
	string s,t;
	cout<<"Enter Two strings to check whether they are Anagrams:"<<endl;
	cout<<"Enter String One: "<<endl;
	cin>>s;
	cout<<"Enter String Two: "<<endl;
	cin>>t;
	cout<<isAnagram(s,t);
	return 0;
}
