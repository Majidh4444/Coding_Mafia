#include<bits/stdc++.h>
using namespace std;


string removeOuterParentheses(string s) {
    stack<char> st;
    string result = "",a = "";
    char c;
    int j=0;
    for(int i=0;i<s.length();i++){
        if(s[i] == '('){
            j++;
            st.push('(');
        }
        else{
            j--;
            if(j == 0){
                while(1){
                    c = st.top();
                    st.pop();
                    if(st.empty()) break;
                    a = c + a;
                }
                result = result + a;
                a = "";
                continue;
            }
            st.push(')');
        }
    }
    return result;
}


//(()())(())(()(()))
int main() {
	cout<<"Enter the Paranthesis Expression:"<<endl;
	string str;
	cin>>str;
    str = removeOuterParentheses(str);
    cout<<str;
    return 0;
}
