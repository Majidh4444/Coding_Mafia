#include <bits/stdc++.h>
using namespace std;

string removeConsecutiveCharacter(string S){
    string A = "";
    for(int i=0;i<S.length();i++){
        if(S[i] != S[i+1]) A = A + S[i];
    }
    return A;
}

int main(){
	string S;
	cout<<"Enter the string : ";
	getline(cin,S);
	cout<<removeConsecutiveCharacter(S);
	return 0;
}

