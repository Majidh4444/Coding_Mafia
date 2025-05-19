#include<bits/stdc++.h>
using namespace std;



string removeDuplicates(string s) {
//     stack<char> st;
//     string str = "";
//     int i=0;
//     while(i<s.length()){
//         if(!st.empty()){
//             if(s[i] == st.top()) st.pop();
//             else st.push(s[i]);
//         }else{
//             st.push(s[i]);
//         }
//         i++;
//     }
//     while(!st.empty()){
//         str = st.top() + str;
//         st.pop();
//     }
//     return str;
    string ans="";
    ans.push_back(s[0]);
    for(int i=1;i<s.size();i++){
        if(s[i]==ans.back()){
            ans.pop_back();
        }else{
            ans.push_back(s[i]);
        }
    }
    return ans;
}


int main() {
	string s;
	cout<<"Enter The String:"<<endl;
	cin>>s;
	cout<<removeDuplicates(s);
    return 0;
}
