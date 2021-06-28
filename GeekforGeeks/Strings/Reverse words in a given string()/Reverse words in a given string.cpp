#include <bits/stdc++.h>
using namespace std;

string reverseWords(string S) { 
    int l = S.size();
    string ans = "";
    int i = l-1,j = l-1;
    while(i >= 0){
        if(S[i] == ' '){
            ans = ans + S.substr(i+1,j-i);
            ans = ans + " ";
            j = i-1;
        }
        i--;
    }
    ans = ans + S.substr(i+1,j-i);
    return ans;
}

int main(){
	string S;
	cout<<"Enter the string to reverse the string wrt words: ";
	getline(cin,S);
	cout<<reverseWords(S);
	return 0;
}

