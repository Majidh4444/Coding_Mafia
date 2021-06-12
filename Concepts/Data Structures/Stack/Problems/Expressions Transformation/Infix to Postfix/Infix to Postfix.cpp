//Implementing Stack using STL
#include<bits/stdc++.h>
using namespace std;


int prec(char c){
	if(c=='^') return 3;
	else if(c=='*' || c=='/') return 2;
	else if(c=='+' || c=='-') return 1;
	else return -1;
}



string infixToPrefix(string str){
	stack<char> s;
	string prefix = "";
	
	for(int i=0;i<str.length();i++){
		if(((str[i]>='A') && (str[i]<='Z')) || ((str[i]>='a') && (str[i]<='z'))){
			prefix += str[i];
		}
		else if(str[i] == '(') s.push(str[i]);
		else if(str[i] == ')'){
			while(!s.empty() && s.top() != '('){
				prefix += s.top();
				s.pop();
			}
			if(!s.empty()){
				s.pop();
			}
		}else{
			while(!s.empty() && (prec(s.top())>=prec(str[i]))){
				prefix += s.top();
				s.pop();
			}
			s.push(str[i]);
		}
	}
	while(!s.empty()){
		prefix += s.top();
		s.pop();
	}
	return prefix;
}


//a+b*(c^d-e)^(f+g*h)-i
int main() {
	cout<<"Enter the Infix Expression:"<<endl;
	string str;
	cin>>str;
    str = infixToPrefix(str);
    cout<<str;
    return 0;
}
