#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string str) {
    set<char> s;
    string ans = "";
    for(int i=0;i<str.size();i++){
    	char c = tolower(str[i]);
        if(s.find(c) == s.end()){
            s.insert(c);
            ans = ans + c;
        }
    }
    return ans;
}

int main(){
	string S;
	cout<<"Enter the string to remove duplicates: ";
	getline(cin,S);
	cout<<removeDuplicates(S);
	return 0;
}

