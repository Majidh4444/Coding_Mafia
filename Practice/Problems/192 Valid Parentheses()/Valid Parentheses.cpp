#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]);
        else if(!st.empty()){
            if(s[i] == ')'){
                if(st.top() == '('){
                    st.pop();
                    continue;
                }
            }else if(s[i] == '}'){
                if(st.top() == '{'){
                    st.pop();
                    continue;
                }
            }else if(s[i] = ']'){
                if(st.top() == '['){
                    st.pop();
                    continue;
                }
            }
            return false;
        }else st.push(s[i]);
    }
    if(!st.empty()) return false;
    return true;
}
 
 
int main(){
	cout<<"Enter The String:"<<endl;
	string s;
	cin>>s;
	cout<<isValid(s);
	return 0;
}
