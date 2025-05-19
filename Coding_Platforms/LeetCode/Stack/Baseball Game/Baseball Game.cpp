#include<bits/stdc++.h>
using namespace std;



int calPoints(vector<string>& ops) {
    stack<int> st;
    for(int i=0;i<ops.size();i++){
        if(ops[i] == "C") st.pop();
        else if(ops[i] == "D") st.push(2*st.top());
        else if(ops[i] == "+"){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.push(a);
            st.push(a+b);
        }else st.push(stoi(ops[i]));
    }
    int ans = 0;
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    return ans;
}


int main() {
	vector<string> v = {"5","2","C","D","+"};
	cout<<calPoints(v);
    return 0;
}
