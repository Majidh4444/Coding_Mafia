#include<bits/stdc++.h>
using namespace std;



string requiredString(string s){
    stack<char> st;
    string ans = "";
    int i=0;
    while(i<s.size()){
        if(s[i] != '#'){
            st.push(s[i]);
        }else{
            if(!st.empty()) st.pop();
        }
        i++;
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    return ans;
}

bool backspaceCompare(string s, string t) {
    string a = requiredString(s);
    string b = requiredString(t);
    return a==b;
}


int main() {
	string s,t;
	s = "a##c";
	t = "#a#c";
	cout<<backspaceCompare(s,t);
    return 0;
}
