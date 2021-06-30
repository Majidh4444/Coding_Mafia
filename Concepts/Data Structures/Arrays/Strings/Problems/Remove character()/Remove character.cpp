#include <bits/stdc++.h>
using namespace std;

string removeChars(string string1, string string2) {
    set<char> st;
    for(int i=0;i<string2.size();i++) st.insert(string2[i]);
    string ans = "";
    for(int i=0;i<string1.size();i++){
        if(st.find(string1[i]) != st.end()) continue;
        ans += string1[i];
    }
    return ans;
}

int main(){
	string S1,S2;
	cout<<"Enter the string one: ";
	getline(cin,S1);
	cout<<"Enter the string two: ";
	getline(cin,S2);
	cout<<removeChars(S1,S2);
	return 0;
}

